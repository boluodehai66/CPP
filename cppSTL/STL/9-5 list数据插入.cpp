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
//	push_front
//	push_back
//	insert
//*/
//int main() {
//	list<int> l;
//
//	//1.push_front
//	l.push_front(-1);
//	l.push_front(-2);
//	l.push_front(-3);
//	printList(l);
//
//	//2.push_back
//	l.push_back(1);
//	l.push_back(2);
//	l.push_back(3);
//	printList(l);
//
//	//3.insert
//	//3.1 insert(迭代器，值)
//	list<int>::iterator it = l.begin();
//	it++;
//	it++;
//	it++;
//	l.insert(it, 0);
//	printList(l);
//
//	//3.2 insert(迭代器， 数量， 值)
//	it = l.end();
//	it--;
//	l.insert(it, 5, 8);
//	printList(l);
//
//	//3.3 insert(迭代器，迭代器的开始位置，迭代器的结束位置)
//	it = l.begin();
//	it++;
//	l.insert(it, l.begin(), l.end());
//	printList(l);
//	return 0;
//}