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
//	pop_front
//	pop_back
//	earse clear
//*/
//
//int main() {
//	list<int> l = { -1,9,8,5,2,1,1,-1 };
//	printList(l);
//
//	l.pop_back();
//	printList(l);
//
//	l.pop_front();
//	printList(l);
//
//	list<int> :: iterator it = l.erase(l.begin()); //8 5 2 1 1
//	printList(l);
//	cout << *it << endl;
//
//	it++;
//	it++;
//	l.erase(it, l.end());
//	printList(l);
//
//	l.clear();	//清空链表中的所有元素
//	printList(l);
//	cout << l.size();
//	return 0;
//}