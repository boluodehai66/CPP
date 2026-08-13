//#include <iostream>
//using namespace std;
//
//
///*
//	静态成员函数的特点：
//	1、静态成员函数内部只能用静态成员变量 无法使用普通成员变量
//	2、所有对象共享函数
//*/
//
//class Hero {
//public:
//	Hero() {
//		m_Name = "xiaoyu";
//		m_Hp = 100;
//	}
//
//	~Hero() {
//
//	}
//
//	static int GetHeroCount() {
//		return m_HeroCount;
//	}
//
//	static int m_HeroCount;
//private:
//	string		m_Name;
//	int			m_Hp;
//};
//
//int Hero::m_HeroCount = 100;
//int main() {
//	Hero h;
//	cout << h.GetHeroCount() << endl;
//	cout << Hero::GetHeroCount() << endl;
//
//	return 0;
//}