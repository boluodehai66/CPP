//#include <iostream>
//#include <deque>
//using namespace std;
//
//void printDeque(deque<int>& d) {
//	for (deque<int>::iterator iter = d.begin(); iter != d.end(); iter++) {
//		cout << *iter << ' ';
//	}
//	cout << endl;
//}
//
//int main6_2() {
//	//1.默认构造函数
//	deque<int> d1;
//	cout << "d1: ";
//	printDeque(d1);
//
//	//2.初始化列表
//	deque<int> d2_1({ 9,8,8,6,5 });
//	cout << "d2_1: ";
//	printDeque(d2_1);
//	deque<int> d2_2 = { 1,9,8,6,5 };
//	cout << "d2_2: ";
//	printDeque(d2_2);
//
//	//3.迭代器
//	deque<int> d3(d2_1.begin() + 1, d2_1.end() - 1);
//	cout << "d3: ";
//	printDeque(d3);
//
//	//4.全0初始化
//	deque<int> d4(10);	//初始化长度为10的双端队列 
//	cout << "d4: ";	//未给出元素值时 默认为0
//	printDeque(d4);
//
//	//5.deque<int> 变量名(a,b) 申请a个元素空间 每个元素初始化为b
//	deque<int> d5(8, 6);
//	cout << "d5: ";
//	printDeque(d5);
//
//	//6.拷贝构造函数
//	deque<int> d6(d5);
//	cout << "d6: ";
//	printDeque(d6);
//	return 0;
//}