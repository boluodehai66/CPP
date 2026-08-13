//#include <iostream>
//using namespace std;
//
////面向对象三大特性：封装 继承 多态
//
///*
//	封装的语法：
//	class 类名{
//	访问权限：
//		属性（成员变量）
//		行为（成员函数）
//	}；
//*/
//
//class Hero {
//	//访问权限
//public:
//	//属性
//	int m_Id;	//m->menber
//	int m_Hp;
//
//	//行为
//	void addHp(int hp) {
//		m_Hp += hp;
//	}
//
//	void subHp(int hp) {
//		m_Hp -= hp;
//	}
//};
//int main() {
//	//实例化：通过类来生成对象的过程
//	Hero h;
//	//访问对象的属性
//	h.m_Id = 5;
//	h.m_Hp = 100;
//	h.addHp(100);
//	cout << "ID:" << h.m_Id << " " << "HP: " << h.m_Hp;
//	return 0;
//}