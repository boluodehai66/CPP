#include <iostream>
using namespace std;

//指针
//引用
//&
//数据类型 & 变量名 = 变量


void test(){
	int a_very_very_very_very_very_very_very_very_long_array[8] = { 1,1 };
	for (int i = 2; i < 8; i++) {
		a_very_very_very_very_very_very_very_very_long_array[i] = a_very_very_very_very_very_very_very_very_long_array[i - 1] * a_very_very_very_very_very_very_very_very_long_array[i - 1] + a_very_very_very_very_very_very_very_very_long_array[i - 2] * a_very_very_very_very_very_very_very_very_long_array[i - 2];
	}

	for (int i = 0; i < 8;i++) {
		cout << a_very_very_very_very_very_very_very_very_long_array[i] << ' ';

	}
	cout << endl;
	//清空一下数组
	for (int i = 2; i < 8; i++) {
		a_very_very_very_very_very_very_very_very_long_array[i] = 0;
	}
	for (int i = 2; i < 8; i++) {
		int pre1 = a_very_very_very_very_very_very_very_very_long_array[i - 1];
		int pre2 = a_very_very_very_very_very_very_very_very_long_array[i - 2];
		int& now = a_very_very_very_very_very_very_very_very_long_array[i];
		now = pre1 * pre1 + pre2 * pre2; 
	}
	for (int i = 0; i < 8; i++) {
		cout << a_very_very_very_very_very_very_very_very_long_array[i] << ' ';
	}

}
int main21() {
	//引用
	
	/*
	int a = 3;
	int& b = a;
	b = 4;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	*/
	
	//指针
	/*
	int a = 3;
	int* b = &a;
	*b = 4;
	cout << "a = " << a << endl;
	cout << "b = " << *b << endl;
	test();
	*/
	

	//引用的特性
	//1、必须初始化	能够避免指针未初始化的风险
	//2、初始化之后无法修改 
	int a = 3;
	int b = 6;
	int& c = a; //这个是初始化 将a的地址给到了c
	c = b;		//这个是赋值 将b的值给到c 这个时候 abc三者都是6
	cout << a << b << c << endl;
	//引用的本质就是一个指针常量
	return 0;
}