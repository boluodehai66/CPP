//#include <iostream>
//#include <list>
//using namespace std;
//
//void printList(list<int>& l) {
//	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int getListItemByIndex(list<int>& l, int index) {
//	list<int> ::iterator it = l.begin();
//	while (index) {
//		it++;
//		index--;
//	}
//	return *it;
//}
//
//int main() {
//	list<int> l = { -1,9,8,5,2,1,1,-1 };
//	//不能进行下标 随机访问	效率低
//	//l[4]
//
//	list<int>::iterator it = l.begin();
//	cout << getListItemByIndex(l, 4) << endl;
//
//	cout << l.front() << endl;
//	cout << l.back() << endl;
//	return 0;
//}