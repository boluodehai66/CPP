//#include <iostream>
//#include <string>
//#include <set> // 引入集合，用于自动去重
//
//using namespace std;
//
//struct info {
//    string name;
//    char ID;       // 建议改成 char，因为题目编号只有单个字母 A-Z
//    string status;
//} stu;
//
//int main() {
//    // 优化输入输出速度（在大量读写时很有用）
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//
//    int t;
//    int n;
//    cin >> t;
//    while (t--) {
//        cin >> n;
//
//        // 定义一个大小为 26 的 set 数组。
//        // solved_teams[0] 代表 A 题通过的队伍集合，solved_teams[1] 代表 B 题...
//        set<string> solved_teams[26];
//
//        for (int i = 0; i < n; i++) {
//            cin >> stu.name >> stu.ID >> stu.status;
//
//            // 只有当提交结果是 accepted 时，才把队伍名加入对应的集合
//            if (stu.status == "accepted") {
//                // stu.ID - 'A' 是一种常见的字符映射技巧：'A'-'A'=0, 'B'-'A'=1
//                solved_teams[stu.ID - 'A'].insert(stu.name);
//            }
//        }
//
//        // 接下来找出通过队伍最多的题
//        int max_count = -1;
//        char easiest_id = 'A';
//
//        // 遍历 A 到 Z（对应数组下标 0 到 25）
//        for (int i = 0; i < 26; i++) {
//            int current_count = solved_teams[i].size(); // 这道题去重后的通过队伍数
//
//            // 注意这里是严格大于 (>)。
//            // 因为我们是从 'A' 遍历到 'Z'，如果遇到通过数相同的题，
//            // 只有严格大于才会更新 easiest_id，这就天然保证了“数量相同时，字典序最小”的要求！
//            if (current_count > max_count) {
//                max_count = current_count;
//                easiest_id = i + 'A'; // 将下标转换回字符
//            }
//        }
//
//        // 输出当前测试用例的最简单题目
//        cout << easiest_id << "\n";
//    }
//
//    return 0;
//}