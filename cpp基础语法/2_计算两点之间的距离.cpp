#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


/*
	输入两点坐标（X1,Y1）,（X2,Y2）,计算并输出两点间的距离。
	输入数据有多组，每组占一行，由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开。
	对于每组输入数据，输出一行，结果保留两位小数。
*/

double Calculate_Distance(double x1, double y1, double x2, double y2) {
	double dis = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return dis;
}
int main5() {
	double x1, y1, x2, y2;
	while (cin >> x1 >> y1 >> x2 >> y2) {
		cout << fixed << setprecision(2) << (Calculate_Distance(x1, y1, x2, y2)) << endl;
	}
	return 0;
}