//#include <iostream>
//using namespace std;
//
///*
//	初始化列表的语法
//	构造函数（传参1，传参2）：成员变量1（传参1）成员变量2（传参2） {}
//*/
//
//class Hero {
//public:
//	//Hero(string name, int hp) {
//	//	m_Name = name;
//	//	m_Hp = hp;
//	//}
//	Hero(string name, int hp, int speed) :m_Name(name), m_Hp(hp), m_Speed(speed) {
//
//	}
//
//	void Print() {
//		cout << "HERO: " << m_Name << " " << "HP: " << m_Hp   << " " << "SPEED: " << m_Speed << endl;
//	}
//private:
//	string		m_Name;
//	int			m_Hp;
//	int			m_Speed;
//};
//
//int main() {
//	Hero h("xiaoyuyu",100,600);
//	h.Print();
//	return 0;
//}