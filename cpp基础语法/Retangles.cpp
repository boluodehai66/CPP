#include <iostream>
using namespace std;
//定义一个结构体 用来表示点
struct Point {
	double x;
	double y;
};
//定义一个结构体 用来表示矩形
struct Rect {
	Point lt;	//左上角
	Point rd;	//右下角
};

Rect r1, r2; //两个矩形
Rect tmp1, tmp2;
int main18() {
	while (cin >> tmp1.lt.x >> tmp1.lt.y >> tmp1.rd.x >> tmp1.rd.y) {
		cin >> tmp2.lt.x >> tmp2.lt.y >> tmp2.rd.x >> tmp2.rd.y;

		//进行标准化 因为不知道给的是左上右下 还是右上左下
		//统一化为左上右下
		r1.lt.x = min(tmp1.lt.x, tmp1.rd.x);
		r1.lt.y = max(tmp1.lt.y, tmp1.rd.y);
		r1.rd.x = max(tmp1.lt.x, tmp1.rd.x);
		r1.rd.y = min(tmp1.lt.y, tmp1.rd.y);

		r2.lt.x = min(tmp2.lt.x, tmp2.rd.x);
		r2.lt.y = max(tmp2.lt.y, tmp2.rd.y);
		r2.rd.x = max(tmp2.lt.x, tmp2.rd.x);
		r2.rd.y = min(tmp2.lt.y, tmp2.rd.y);

		double maxx = max(r1.lt.x, r2.lt.x);
		double minx = min(r1.rd.x, r2.rd.x);

		double miny = min(r1.lt.y, r2.lt.y);
		double maxy = max(r1.rd.y, r2.rd.y);
		double ans = (minx - maxx) * (miny - maxy);
		//不相交
		if (minx < maxx) ans = 0;
		if (miny < maxy) ans = 0;
		printf("%.2lf\n", ans);

	}
	return 0;
}