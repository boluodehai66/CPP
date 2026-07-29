#include <iostream>
using namespace std;

struct Point {
	double x, y;
};
struct Circle {
	Point pt;
	double radius;
};
void printCircle(Circle c) {
	cout << '(' << c.pt.x << ',' << c.pt.y << ')' << ' ' << c.radius << endl;
}
void moveCircle(Circle *c, int x, int y) {
	c->pt.x += x;
	c->pt.y += y;
}

int main19() {
	Circle c = { {9,8},5 };
	moveCircle(&c, 1, -2);	//如果不使用指针的话 函数中参数的地址和实际的地址不一样
							//就会导致函数中的位置发生了变化 但是实际地址并未发生变化
							//因此用指针直线我们实际的地址 这样在修改的时候就能够真正修改变量值了
	printCircle(c);


	return 0;
}