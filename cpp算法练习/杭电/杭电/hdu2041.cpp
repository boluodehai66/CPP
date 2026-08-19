#include <iostream>
#include <stdexcept>

using namespace std;

// 现代 C++ 推荐使用 using 替代 #define 进行类型别名定义
using eleType = int;

struct ListNode {
    eleType data;
    ListNode* next;
    // 使用 nullptr 替代 NULL
    ListNode(eleType x) : data(x), next(nullptr) {}
};

class LinkedList {
private:
    int size;
    ListNode* head;

public:
    LinkedList() : head(nullptr), size(0) {}
    ~LinkedList();

    void insert(int i, eleType value);
    void insertSorted(eleType value); // 新增：有序插入方法
    void remove(int i);
    ListNode* find(eleType value);
    ListNode* get(int i);
    void update(int i, eleType value);
    void print();
};

LinkedList::~LinkedList() {
    ListNode* curr = head;
    while (curr != nullptr) {
        ListNode* temp = curr;
        curr = curr->next;
        delete temp;
    }
}

// 增：按索引插入
void LinkedList::insert(int i, eleType value) {
    if (i < 0 || i > size) {
        throw std::out_of_range("Invalid position");
    }
    ListNode* newNode = new ListNode(value);
    if (i == 0) {
        newNode->next = head;
        head = newNode;
    }
    else {
        ListNode* curr = head;
        for (int j = 0; j < i - 1; j++) {
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
    }
    size++;
}

// 新增：按顺序插入，保持链表升序
void LinkedList::insertSorted(eleType value) {
    ListNode* newNode = new ListNode(value);

    // 1. 如果链表为空，或者新值比头节点还小，直接插在最前面
    if (head == nullptr || value <= head->data) {
        newNode->next = head;
        head = newNode;
        size++;
        return;
    }

    // 2. 用 curr 指针查找插入位置的前驱节点
    ListNode* curr = head;
    while (curr->next != nullptr && curr->next->data < value) {
        curr = curr->next;
    }

    // 3. 将新节点插入到 curr 之后
    newNode->next = curr->next;
    curr->next = newNode;
    size++;
}

// 删
void LinkedList::remove(int i) {
    // 修正：删除的有效索引为 [0, size - 1]，此处应为 i >= size
    if (i < 0 || i >= size) {
        throw std::out_of_range("Invalid position");
    }
    if (i == 0) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
    else {
        ListNode* curr = head;
        for (int j = 0; j < i - 1; j++) {
            curr = curr->next;
        }
        ListNode* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
    size--;
}

// 查：按值查找
ListNode* LinkedList::find(eleType value) {
    ListNode* curr = head;
    while (curr != nullptr && curr->data != value) {
        curr = curr->next;
    }
    return curr;
}

// 查：按位置获取节点
ListNode* LinkedList::get(int i) {
    // 修正：获取的有效索引为 [0, size - 1]，此处应为 i >= size
    if (i < 0 || i >= size) {
        throw std::out_of_range("Invalid position");
    }
    ListNode* curr = head;
    for (int j = 0; j < i; j++) {
        curr = curr->next;
    }
    return curr;
}

// 改
void LinkedList::update(int i, eleType value) {
    get(i)->data = value;
}

// 遍历输出
void LinkedList::print() {
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr->data;
        if (curr->next != nullptr) {
            cout << " ";
        }
        curr = curr->next;
    }
    cout << "\n";
}

int main() {
    // 提高输入输出效率
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LinkedList l;
    l.insert(0, 1);
    l.insert(1, 1);
    l.insert(2, 1);
    //斐波那契数列
    for (int j = 3; j <= 40; j++) {
        ListNode* a = l.get(j - 1);
        ListNode* b = l.get(j - 2);
        l.insert(j, a->data + b->data);
    }
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        cout << l.get(x)->data << endl;
    }
   
    return 0;
}
//2 3 4 5 6
//1 1 3 5 8 