//#include <iostream>
//using namespace std;
//
///*
//	struct class
//
//	只有访问权限的区别
//	struct 默认是公共的
//	class  默认是私有的
//*/
//
//class C {
//	int m_a;
//};
//
//struct S {
//	int m_a;
//
//	void func() {
//		m_a = 666;
//	}
//};
//
//int main() {
//	C c;
//	S s;
//	//c.m_a;	//私有
//	s.m_a = 1; //公有
//	s.func();
//	cout << s.m_a << endl;
//	return 0;
//}