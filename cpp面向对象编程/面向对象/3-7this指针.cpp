#include <iostream>
using namespace std;
/*
	this指针
	1、解决命名冲突
	2、*this 就可以获取
*/

class Hero {
public:
	Hero(int hp) {
		//hp = hp; 形参赋值给形参
		this->hp = hp;	//this指向对象 不指向形参
		cout << this << endl;
		cout << (*this).hp << endl;
	}
	int hp;
};
int main() {
	Hero h(100);
	cout << h.hp << endl;
	cout << &h << endl;	//说明this和h是同一个地址 也就是this指向h
	cout << (*(&h)).hp << endl;
	return 0;
}