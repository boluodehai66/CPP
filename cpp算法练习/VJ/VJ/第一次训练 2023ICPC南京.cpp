#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> cond(m);
    for (int i = 0; i < m; ++i) {
        cin >> cond[i].first >> cond[i].second;
    }

    // 按照操作步数 a_i 从小到大排序
    sort(cond.begin(), cond.end());

    int prev_a = 0, prev_b = 0; // 初始状态 (0, 0)
    bool ok = true;

    for (int i = 0; i < m; ++i) {
        int cur_a = cond[i].first;
        int cur_b = cond[i].second;

        int da = cur_a - prev_a; // 操作步数差
        int db = cur_b - prev_b; // 计数器数值差

        // 判定条件：全程无清零(db == da) 或 至少清零一次(cur_b <= da - 1)
        if (db == da || cur_b <= da - 1) {
            prev_a = cur_a;
            prev_b = cur_b;
        }
        else {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
}

int main() {
    // 优化输入输出效率
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}