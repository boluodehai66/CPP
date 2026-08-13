//#include <iostream>
//using namespace std;
//
///*
//	构造函数需要注意的点：
//	1、函数名称和类名保持一致
//	2、返回值类型不需要写
//	3、构造函数可以有参数
//*/
//
//class Hero {
//public:
//	//默认构造函数:在函数体内部 把所有成员变量初始化
//	Hero() {
//		m_Name = "";
//		m_SkillCount = 4;
//		m_Speed = 100;
//		cout << "Default Hero initialised!" << "Skill Count: " << m_SkillCount << endl;
//	}
//	//有参构造函数
//	Hero(string name, int skillcount) {
//		m_Name = name;
//		m_SkillCount = skillcount;
//		m_Speed = 100;
//		cout << "Parameter Hero initialised!" << "Skill Count: " << m_SkillCount << endl;
//
//	}
//private:
//	string	m_Name;
//	int		m_SkillCount;
//	int		m_Speed;
//
//};
//
//int main() {
//	Hero h1;
//	Hero h2("xiaoyuyu",6);
//	Hero h3();	//函数声明 不是实例化
//	Hero h4{};	//无参实例化
//	Hero h5 = Hero("xiaoliangliang",7);
//	return 0;
//}