//#include <iostream>
//#include <stdexcept>
//using namespace std;
//
//#define eleType int
//
//struct ListNode {
//	eleType data;
//	ListNode* next;
//	//初始化链表结构体
//	ListNode(eleType x) : data(x), next(NULL){}
//};
//
//class LinkedList {
////定义链表私有类 链表大小和头节点
//private:
//	eleType size;
//	ListNode* head;
////定义公有类增删查改函数
//public:
//	//构造函数
//	//初始化列表
//	LinkedList(): head(NULL),size(0) {}
//	//析构函数
//	~LinkedList();
//	//增
//	void insert(int i, eleType value);
//	//删
//	void remove(int i);
//	//查
//	//获取需要值所对应的位置
//	ListNode* find(eleType value);
//	//获取该位置所对应的值
//	ListNode* get(int i);
//	//改
//	void update(int i, eleType value);
//	//检测
//	void print();
//};
////析构函数 用来最终清空链表并释放内存
//LinkedList::~LinkedList() {
//	ListNode* curr = head;
//	while (curr != NULL) {
//		ListNode* temp = curr;
//		curr = curr->next;
//		delete temp;
//	}
//}
////增
//void LinkedList::insert(int i, eleType value) {
//	if (i < 0 || i > size) {
//		throw std::out_of_range("Invalid position");
//	}
//	//给新增的数据分配内存
//	ListNode* newNode = new ListNode(value);
//	//如果是在首个位置插入
//	if (i == 0) {
//		newNode->next = head;
//		head = newNode;
//
//	}
//	//在非首个位置插入
//	else {
//		//创建一个curr指针 用来指代现在位置
//		ListNode* curr = head;
//		//用一个for循环 执行i-1次 
//		//此时curr跑到了i的前一个位置
//		for (int j = 0; j < i - 1; j++) {
//			curr = curr->next;
//		}
//		//插入新元素并更改指针的指向
//		newNode->next = curr->next;
//		curr->next = newNode;
//	}
//	//扩容
//	size++;
//}
////删
//void LinkedList::remove(int i) {
//	//判断i的范围是否合法
//	if (i < 0 || i > size) {
//		throw std::out_of_range("Invalid position");
//	}
//	//如果删除的位置是头节点
//	if (i == 0) {
//		ListNode* temp;
//		temp = head;
//		head = head->next;
//		delete temp;
//	}
//	else {
//		//curr必须在需要删除的位置的前一个位置
//		//如果在需要删除的位置 那么链表前后两段无法顺利连接
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
////查 
////find 返回的不是值 是该元素在链表中的地址
////加上->data才能返回该位置对应的值
//ListNode* LinkedList::find(eleType value) {
//	ListNode* curr = head;
//	//curr为空说明遍历到了链表尾部
//	//curr->data等于value 或 curr遍历完链表 结束
//	//否则就后移指针 遍历链表
//	while (curr != NULL && curr->data != value) {
//		curr = curr->next;
//	}
//	return curr;
//}
////get 获取该位置对应的值
//ListNode* LinkedList::get(int i) {
//	if (i < 0 || i > size) {
//		throw std::out_of_range("Invalid position");
//	}
//	//不用考虑是否为头节点
//	//直接遍历整个链表即可 直到curr指向i
//	ListNode* curr = head;
//	for (int j = 0; j < i; j++) {
//		curr = curr->next;
//	}
//	return curr;
//}
////改
//void LinkedList::update(int i, eleType value) {
//	get(i)->data = value;
//}
////测试
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
//	//增
//	list.insert(0, 1);
//	list.insert(1, 2);
//	list.insert(2, 3);
//	list.insert(3, 4);
//	list.print();
//	//删
//	list.remove(0);
//	list.print();
//	//改
//	list.update(2, 6);
//	list.print();
//	//查
//	cout << list.get(2)->data << endl;
//	cout << list.find(2) << endl;
//	return 0;
//}