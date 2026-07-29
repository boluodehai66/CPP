//#include <iostream>
//using namespace std;
////内存地址独立 互不干扰
//struct DataS {
//	int i;
//	double d;
//	char s[10];
//};
////共享内存地址 互相影响 联合体成员起始地址相同
//union DataU {
//	int i;
//	double d;
//	char s[10];
//};
//
////1.定义和使用结合
//union DataU {
//	int i;
//	double d;
//	char s[10];
//}a, b, c;
//
////2.定义和使用分开
//union DataU {
//	int i;
//	double d;
//	char s[10];
//};
//DataU a, b, c;
//
////3.匿名使用
//union {
//	int i;
//	double d;
//	char s[10];
//}a, b, c;
//
//int main20() {
//	DataS ds;
//	cout << &ds.i << "," << &ds.d << "," << (void*)ds.s << endl;
//	DataU du;
//	cout << &du.i << "," << &du.d << "," << (void*)du.s << endl;
//
//	return 0;
//}