#include <iostream>
using namespace std;

/*
	const 和 指针的关系

	指针常量		type* const			指针值是常量					指针无法被赋值
	常量指针		const type*			指针指向的值是常量				指针解引用之后无法被赋值
	常量指针常量	const type* const	指针值和指针指向的值都是常量	指针值和指针解引用之后的值都不能被赋值

*/

int main11() {
	int a = 1;
	int b = 2;

	//指针常量
	//int* const p = &a;	//p不可被修改  
	//p = &b;			也就是a的地址不可被修改
	//*p = 6;				//但是a的值可以被修改
	//cout << *p << " " << a << endl;

	//常量指针
	const int* pa = &a; //*pa不可被修改
	//*pa = 7			// 也就是a的值不可被修改
	pa = &b;			// 但是a的地址可以被修改
	cout << *pa << ' ' << b << ' ' << a << endl;

	//常量指针常量  既是指针常量又是常量指针
	const int* const pb = &b;
	//pb = &a		//b的地址不可被修改
	//*pb = 8		//b的值也不可被修改
	return 0;
}