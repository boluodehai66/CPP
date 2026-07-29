#include <iostream>
using namespace std;

//常量引用
//引用 = 指针常量
//常量引用 = 常量指针常量
struct S {
	int a, b, c, d, e, f;

};
void printS(const S& s) {
	//s.b = 520;
	cout << s.a << s.b << s.c << s.d << s.e << s.f;
}
int main24() {
	int a;
	const int& b = a;
	S s = { 1,2,3,4,5,6 };
	printS(s);
	return 0;
}