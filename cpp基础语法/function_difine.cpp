#include <iostream>
using namespace std;

/*
	函数的定义
	返回值类型 函数名(定义参数){
		函数体
		return 表达式
	}
*/

int add(int a, int b) {

	return a + b;
}

//void 无返回值
void coutAplusB(int c, int d) {
	cout << c + d << endl;
}

void max(int a, int b) {
	cout << (a > b ? a : b) << endl;
}

void swap(int a, int b) {
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "----------" << endl;
	int tmp = a; a = b; b = tmp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

int main3() {
	//cout << add(1, 7) << endl;
	//coutAplusB(2, 9);
	//max(3, 6);
	int a = 3;
	int b = 6;
	swap(a, b); //函数中的ab和main中的ab并不是同一个地址  
				//交换只在函数中进行 因此只有函数中的ab值交换了
	cout << "---------" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}