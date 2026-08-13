//#include <iostream>
//using namespace std;
///*
//	与构造函数相对
//	构造函数是对成员初始化
//	析构函数是对成员做反初始化	做数据清理 系统自动调用
//
//	析构函数注意点
//	1、函数名称和类名一致，并且在最前面加上一个~波浪号
//	2、函数返回值不需要写
//	3、不能有参数
//*/
//class Hero {
//public:
//	//构造函数
//	Hero() {
//		cout << "default Hero" << endl;
//	}
//	//析构函数
//	~Hero() {
//		cout << "析构函数 " << endl;
//	}
//};
//int main() {
//	Hero h;
//	int a;
//	cin >> a;
//	return 0;
//}