//#include <iostream>
//using namespace std;
//
///*
//	访问权限：
//	公共权限	public		类内可以访问 类外也可以
//	保护权限	protected	类内可以访问 类外不可以	子类可以访问
//	私有权限	private		类内可以访问 类外不可以	子类不可以
//
//	B -> A
//	A 父类、基类
//	B 子类、派生类
//*/
//
//class People {
//	//公有权限
//public:
//	int m_Id;
//	//保护权限
//protected:
//	int m_HouseId;
//	//私有权限
//private:
//	int m_PayPass;
//
//public:
//	void work() {
//		//所有成员变量 类内均可访问 
//		m_Id = 1;
//		m_HouseId = 2;
//		m_PayPass = 123;
//	}
//};
//
//class Son : public People {
//	void func() {
//		m_Id = 1;
//		m_HouseId = 5;		//保护成员 子类可以访问
//		//m_PayPass = 1212;	//私有成员 子类不可访问
//	}
//};
//
//int main() {
//	//实例化
//	People p;
//	p.m_Id = 1;	//公有成员 类内外均可访问
//	//p.HouseId = 5;	//保护成员 类外不可访问
//	//p.m_PayPass = 123;	//私有成员 类外不可访问
//	return 0;
//}