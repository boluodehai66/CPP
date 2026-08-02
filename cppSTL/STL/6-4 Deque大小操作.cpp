//#include <iostream>
//#include <deque>
//using namespace std;
//
///*
//	1.empty		询问是否为空
//	2.sizse		查看大小
//	3.resieze	重新定义大小
//*/
//
//void printDeque(deque<int>& d) {
//	for (int i = 0; i < d.size(); i++) {
//		cout << d[i] << ' ';
//	}
//	cout << endl;
//}
//
//int main6_4() {
//	deque<int> d;
//
//	cout << "d.empty() = " << d.empty() << endl;	//1为空 0不为空
//	cout << "d.size()  = " << d.size() << endl;
//	printDeque(d);
//
//	d.assign({ 1,2,3 });
//	cout << "d.empty() = " << d.empty() << endl;	
//	cout << "d.size()  = " << d.size() << endl;
//	printDeque(d);
//
//	d.resize(18);
//	cout << "d.empty() = " << d.empty() << endl;
//	cout << "d.size()  = " << d.size() << endl;
//	printDeque(d);
//
//	d.resize(20,6);	//新增的元素初始化为6
//	cout << "d.empty() = " << d.empty() << endl;
//	cout << "d.size()  = " << d.size() << endl;
//	printDeque(d);
//
//	return 0;
//}