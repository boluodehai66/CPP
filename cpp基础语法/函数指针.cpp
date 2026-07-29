#include <iostream>
using namespace std;

//函数指针
double (*ptr)(int a, int b, int c);
void (*ptr1)(int a, int b);

void (*fptr1)(int a, int b, int c, float d, char e);
void func2(int a, int b, int c, float d, char e) {
	cout << "func1" << endl;
}


//函数指针类型的定义
typedef void (*fptr)(int a, int b, int c, float d, char e);
//这个时候fptr就变成了一种类型 下次再需要定义的时候直接用 fptr fp1定义即可 和int是一样的

//返回值要一一对应
double func(int a, int b, int c) {
	cout << a << ' ' << b << ' ' << c << endl;
	return 0.0;
}
void func1(int a, int b) {
	cout << a << ' ' << b << endl;
}


int main14() {
	ptr = func;
	ptr(4, 5, 6);
	//ptr = func1; 指针定义的类型与函数的类型必须要一一对应
	ptr1 = func1;
	ptr1(6, 10);

	fptr fp1 = func2;
	func2(1, 2, 3, 4, 5);
	return 0;
}