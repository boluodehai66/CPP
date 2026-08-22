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
///*
//	empty()
//	size()
//	resize()
//*/
//
//int main() {
//	list<int> l;
//	cout << "l.empty() = " << l.empty() << endl;
//	cout << "l.size() = " << l.size() << endl;
//	cout << "-----------" << endl;
//
//	l.assign({ 1,2,3 });
//	cout << "l.empty() = " << l.empty() << endl;
//	cout << "l.size() = " << l.size() << endl;
//	cout << "-----------" << endl;
//
//	l.resize(18);
//	cout << "l.empty() = " << l.empty() << endl;
//	cout << "l.size() = " << l.size() << endl;
//	printList(l);
//	cout << "-----------" << endl;
//
//	l.resize(20, 6);
//	cout << "l.empty() = " << l.empty() << endl;
//	cout << "l.size() = " << l.size() << endl;
//	printList(l);
//	cout << "-----------" << endl;
//
//	return 0;
//}