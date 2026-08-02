//#include <iostream>
//#include <deque>
//using namespace std;
//
//void printDeque(deque<int>& d) {
//	for (deque<int>::iterator iter = d.begin(); iter != d.end(); iter++) {
//		cout << *iter << " ";
//	}
//	cout << endl;
//}
//
///*
//	1.pop_front
//	2.pop_back
//	3.erase
//	4.clear 全部删除 清空
//*/
//int main() {
//	deque<int> d = { -1,9,8,5,2,1,1,-1 };
//	printDeque(d);
//
//	d.pop_back();
//	printDeque(d);
//
//	d.pop_front();
//	printDeque(d);
//
//	//erase
//	//删除该位置的一个元素
//	d.erase(d.begin() + 2);
//	printDeque(d);
//
//	//clear
//	d.clear();
//	cout << "d.empty()= " << d.empty() << endl;
//	cout << "d.size() = " << d.size() << endl;
//
//
//	return 0;
//}