#include <iostream>
using namespace std;

//*&
void allocMemory1(char* ptr, int bytes) {
	ptr = new char[bytes];
	cout << "ptr adress:" << &ptr << endl;

}
void test1() {
	char* p = NULL;
	allocMemory1(p, 5);
	cout << (void*)p << endl;
	cout << "p adress:" << &p << endl;
}

void allocMemory2(char*& ptr, int bytes) {
	ptr = new char[bytes];
	cout << "ptr adress:" << &ptr << endl;

}
void test2() {
	char* p = NULL;
	allocMemory2(p, 5);
	cout << (void*)p << endl;
	cout << "p adress:" << &p << endl;

}

int main() {
	test1();	//此时p指针并未指向ptr 仍未空
	test2();	//此时p指向ptr  两者地址相同 ptr是p的一个别名                                                                                                                                                                                                                                                                                                                                                                                                                             
	return 0;
