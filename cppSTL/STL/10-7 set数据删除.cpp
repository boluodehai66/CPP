//#include <iostream>
//#include <set>
//#include <vector>
//using namespace std;
//
//void printSet(const set<int>& s) {
//	for (set<int> ::const_iterator it = s.begin(); it != s.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//int main() {
//	//1.erase(数值)
//	set<int> s = { 1,2,3,4,5 };
//	s.erase(3);
//	printSet(s);
//
//	//2.erase(迭代器)
//	set<int>::iterator rm = s.find(4);
//	if (rm != s.end()) {
//		s.erase(rm);
//	}
//	printSet(s);
//
//	//3.删除指定范围的元素  区间是左闭右开区间 
//	s = { 1,2,3,4,5 };
//	set<int>::iterator rml = s.find(2);
//	set<int>::iterator rmr = s.find(4);
//	s.erase(rml, rmr);
//	printSet(s);
//
//	return 0;
//}