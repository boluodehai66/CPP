//#include <iostream>
//#include <stdexcept>
//using namespace std;
//
//#define eleType int
//
//struct ListNode {
//	eleType data;
//	ListNode* next;
//	//初始化列表
//	ListNode(eleType x) : data(x), next(NULL){}
//
//};
//
//class LinkedList {
//private:
//	ListNode* head;
//	int size;
//public:
//	LinkedList() :head(NULL), size(0) {}
//	~LinkedList();
//	void insert(int i, eleType value);
//	void remove(int i);
//	ListNode* find(eleType value);
//	ListNode* get(int i);
//	void update(int i, eleType value);
//	void print();
//};
////析构函数
//LinkedList :: ~LinkedList() {
//	ListNode* curr = head;
//	while (curr != NULL) {
//		ListNode* tmp = curr;
//		curr = curr->next;
//		delete tmp;
//	}
//}
//
//void LinkedList::insert(int i, eleType value) {
//	if (i < 0 || i > size) {
//		throw std::out_of_range("Invalid position");
//	}
//	ListNode* newNode = new ListNode(value);
//	if (i == 0) {
//		newNode->next = head;
//		head = newNode;
//	}
//	else {
//		ListNode* curr = head;
//		for (int j = 0; j < i - 1; j++) {
//			curr = curr->next;
//		}
//		newNode->next = curr->next;
//		curr->next = newNode;
//	}
//	size++;
//}
//void LinkedList::remove(int i) {
//	if (i < 0 || i > size) {
//		throw std::out_of_range("Invalid positon");
//	}
//	if (i == 0) {
//		ListNode* tmp = head;
//		head = head->next;
//		delete tmp;
//	}
//	else {
//		ListNode* curr = head;
//		for (int j = 0; j < i - 1; j++) {
//			curr = curr->next;
//		}
//		ListNode* temp = curr->next;
//		curr->next = temp->next;
//		delete temp;
//	}
//	size--;
//}
////查找值
//ListNode* LinkedList::find(eleType value) {
//	ListNode* curr = head;
//	while (curr && curr->data != value) {
//		curr = curr->next;
//	}
//	return curr;
//}
////查找索引
//ListNode* LinkedList::get(int i) {
//	if (i < 0 || i > size) {
//		throw std::out_of_range{ "Invalid position" };
//	}
//	ListNode* curr = head;
//	for (int j = 0; j < i; j++) {
//		curr = curr->next;
//	}
//	return curr;
//}
//
//void LinkedList::update(int i, eleType value) {
//	ListNode* curr = head;
//	//for (int j = 0; j < i; j++) {
//	//	curr = curr->next;
//	//}
//	//curr->data = value;
//	get(i)->data = value;
//}
////调试
//void LinkedList::print() {
//	ListNode* curr = head;
//	while (curr) {
//		cout << curr->data << " ";
//		curr = curr->next;
//	}
//	cout << endl;
//}
//int main() {
//	LinkedList list;
//	list.insert(0, 10);
//	list.insert(1, 20);
//	list.insert(2, 30);
//	list.insert(3, 40);
//	list.insert(4, 50);
//	list.print();
//
//	list.remove(0);
//	list.print();
//
//	list.update(3, 90);
//	list.print();
//
//	ListNode* temp = list.find(30);
//	cout << list.find(30)->data << endl;
//
//	cout << list.get(3)->data << endl;
//	return 0;
//}