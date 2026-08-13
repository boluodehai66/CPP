//#include <iostream>
//using namespace std;
//
////接口 方法 函数 是同一个概念 提供给外部调用的
//// 属性私有化的作用
////1、可以控制读写权限
////2、可以控制检测数据的有效性
//class Hero {
//public:
//	void SetName(string name) {
//		m_Name = name;
//	}
//	string GetName() {
//		return m_Name;
//	}
//
//	int GetSkillCount() {
//		return m_SkillCount;
//	}
//
//	void SetSpeed(int speed) {
//		if (speed < 100 || speed > 500) {
//			cout << "WRONG SPEED" << endl;
//			return;
//		}
//		m_Speed = speed;
//	}
//private:
//	string	m_Name;				//可读可写
//	int		m_SkillCount = 4;	//只读
//	int		m_Speed;			//只写
//};
//
//int main() {
//	Hero h;
//	h.SetName("xiaoyuyu");
//	cout << "Name: " << h.GetName() << endl;
//	cout << "Skill Count: " << h.GetSkillCount() << endl;
//	h.SetSpeed(666);
//	return 0;
//}