#include <iostream>
using namespace std;

int main10() {
	int a = 10;
	int b = 20;
	//1.指针的定义
	//数据类型 * 指针变量名；
	int* pa;
	pa = &a;
	printf("%#X %#X", &a, pa);
	cout << endl;
	//2.解引用
	//*指针变量名 = 数值；
	cout << (*pa) << ' ' << a << endl;
	//3. & 和 *  两者都是右结合 即从右往左运算
	//*&a = *(&a) = *pa = a
	//&*pa = &(*pa) = &a = pa

	//空指针
	int* p = NULL;
	//野指针
	int* z = (int*)0x12345;
	return 0;
}