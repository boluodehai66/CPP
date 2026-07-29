#include <iostream>
using namespace std;


/*
	人民币一共有100元、50元、10元、5元、2元和1元六种。
	不找零
	输入数据包含多个测试实例，每个测试实例的第一行是一个整数n（n<100），
	表示老师的人数，然后是n个老师的工资。
	n=0表示输入的结束，不做处理。

	对于每个测试实例输出一个整数x,表示至少需要准备的人民币张数。每个输出占一行。
*/

int calc(int x) {
	int b[] = { 100, 50 ,10, 5, 2, 1 };
	int cnt = 0;
	for (int i = 0; i < 6; i++) {
		int y = x / b[i];
		cnt += y;
		x = x - y * b[i];
	}
	return cnt;
}

int main9() {
	int n, x;
	while (cin >> n && n) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> x;
			sum += calc(x);
		}
		cout << sum << endl;
	}

	return 0;
}