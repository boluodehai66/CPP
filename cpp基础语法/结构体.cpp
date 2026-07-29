#include <iostream>
#include <string>
using namespace std;

//结构体的定义
//struct 结构体名 {变量列表 }；
struct Book {
	string name;
	double price;
	int value;
}cpp;

int main17() {
	//结构体的创建
	//2.1
	Book c;
	c.name = "Cyuyanchengxusheji";
	c.price = 23.99;
	c.value = 10;
	cout << c.name << ' ' << c.price << ' ' << c.value << endl;
	////2.2
	//Book py = { "Python", 39.99, 10 };
	//cout << py.name << ' ' << py.price << ' ' << py.value << endl;
	////2.3
	//cpp.name = "C++";
	//cpp.price = 99.99;
	//cpp.value = 90;
	//cout << cpp.name << ' ' << cpp.price << ' ' << cpp.value << endl;


	////3.结构体数组
	////结构体名 数组名[元素个数] {{}，{}，。。。}
	//Book books[3] = {
	//	{"cyuyan", 10.0, 7},
	//	{"Pythonrumen", 12.0, 8},
	//	{"CPP", 52.3, 9}

	//};
	//books[2].price = 69.99;
	//for (int i = 0; i < 3; i++) {
	//	cout << books[i].name << ' ' << books[i].price << ' '  << books[i].value << endl;
	//}

	//4.结构体指针
	Book* pb = &c;
	pb->name = "cyuyan";
	cout << c.name << ' ' << c.price << ' ' << c.value << endl;

	return 0;
}