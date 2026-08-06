//#include <iostream>
//using namespace std;
//
//// 将返回值改为 void，直接在函数内部按格式输出序列
//void PrintAverageSequence(int n, int m) {
//    // 数组空间开到 105，防止 n=100 时 num[100] 越界
//    int num[105] = {};
//    for (int i = 1; i <= n; i++) {
//        num[i] = i * 2;
//    }
//
//    int sum = 0; // 累加和定义在循环外部
//    int cnt = 0; // 当前组已累加的数量
//    bool isFirst = true; // 用于控制输出格式（数字间用空格分隔）
//
//    for (int i = 1; i <= n; i++) {
//        sum += num[i];
//        cnt++;
//
//        // 条件1：凑够了 m 个数
//        // 条件2：已经到了最后一个数（即 i == n），即使不够 m 个也要输出
//        if (cnt == m || i == n) {
//            if (!isFirst) {
//                cout << " "; // 非首个数字前打印空格
//            }
//            cout << sum / cnt;
//            isFirst = false;
//
//            // 清空计数器与累加和，准备处理下一组
//            sum = 0;
//            cnt = 0;
//        }
//    }
//    cout << endl; // 每组数据输出完毕后换行
//}
//
//int main() {
//    int n, m;
//    // 处理多组输入
//    while (cin >> n >> m) {
//        PrintAverageSequence(n, m);
//    }
//    return 0;
//}