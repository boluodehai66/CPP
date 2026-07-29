#include <iostream>
using namespace std;

/*
	输入数据有多组，每组占一行，每行包含一个实数。
	对于每组输入数据，输出它的绝对值，要求每组数据输出一行，结果保留两位小数。
*/

double ABS(double a) {
	return abs(a);
}

int main4() {
	double b;
	while (cin >> b) {
		printf("%.2lf", ABS(b));
		cout << endl;
	}
	return 0;
}