//#include <iostream>
//#include <vector>
//using namespace std;
//
////void printVector(vector<int>& v) {
////	for (vector<int>::iterator iter = v.begin(); iter < v.end(); iter++) {
////		cout << *iter << ' ';
////	}
////	cout << endl;
////}
//
///*
//
//	push_back 在末尾插入元素
//	insert 传入迭代器 可以在中间插入元素
//	insert(迭代器,需要插入的数值);
//*/
//int main4_4() {
//	vector<int> v;
//	for (int i = 0;i < 10;i++) {
//		v.push_back(i);
//	}
//	v.insert(v.begin(), 888);
//	v.insert(v.begin()+1, 666);
//
//	printVector(v);
//	return 0;
//}