#include <iostream>
using namespace std;

//函数的值传递
void swap1(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}
//函数的地址传递
void swap2(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}


int main13() {
	int a = 1;
	int b = 2;
	swap1(a, b);
	cout << a << ' ' << b << endl; //a b的地址所对应的值并没有交换
	swap2(&a, &b);
	cout << a << ' ' << b; //a b的地址所对应的值真正进行了交换

	return 0;
}