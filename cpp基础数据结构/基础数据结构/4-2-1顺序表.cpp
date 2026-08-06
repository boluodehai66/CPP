//#include <iostream>
//using namespace std;
//
//#define eletype int
//
////定义顺序表结构体
//struct sequentiallist {
//	eletype* elements;
//	int size;
//	int capacity;
//};
//
////初始化顺序表
//void initializelist(sequentiallist* list, int capacity) {
//	list->elements = new eletype[capacity];	//申请空间
//	list->size = 0;
//	list->capacity = capacity;
//}
//
////实现顺序表的销毁
//void destroylist(sequentiallist* list) {
//	delete[] list->elements;
//}
//
////实现获取顺序表的大小
//int size(sequentiallist* list) {
//	return list->size;
//}
//
////检查顺序表是否为空
//bool isempty(sequentiallist* list) {
//	return list->size == 0;
//}
//
////实现顺序表的插入
//void insert(sequentiallist* list, int index, eletype element) {
//	//判断index是否合法 应该在范围之内
//	if (index < 0 || index > list->size) {
//		throw std::invalid_argument("invalid index");
//	}
//	//判断顺序表的空间是否被用完了
//	//如果用完 进行扩容操作
//	if (list->size == list->capacity) {
//		//扩容
//		int newcapacity = list->capacity * 2;
//		//拷贝原来顺序表的元素
//		eletype* newelements = new eletype[newcapacity];
//		for (int i = 0; i < list->size; i++) {
//			newelements[i] = list->elements[i];
//		}
//		//释放原来顺序表的空间
//		delete[] list->elements;
//		list->elements = newelements;
//		list->capacity = newcapacity;
//	} 
//	//开始插入元素
//	for (int i = list->size; i > index; i--) {
//		//把元素往后挪 
//		//倒着开始是因为要把元素一个一个向后覆盖
//		//而list->size()上最开始是空的 所以要倒着开始
//		list->elements[i] = list->elements[i - 1];
//	}
//	//在index的位置上插入新元素
//	list->elements[index] = element;
//	list->size++;
//}
//
////顺序表的元素删除
//void deleteelement(sequentiallist* list, int index) {
//	//判断index是否合法 应该在范围之内 
//	// >=才对 最后一个位置没有元素
//	if (index < 0 || index >=  list->size) {
//		throw std::invalid_argument("invalid index");
//	}
//	for (int i = index; i < list->size - 1; i++) {
//		//把index后一个位置的元素不断往前覆盖
//		list->elements[i] = list->elements[i + 1];
//	}
//	list->size--;
//
//}
//
////实现查找某个元素的下标
//int findelement(sequentiallist* list, eletype element) {
//	for (int i = 0; i < list->size; i++) {
//		//找到元素并返回下标
//		if (list->elements[i] == element) {
//			return i;
//		}
//	}
//	//未找到
//	return -1;
//}
//
////实现顺序表的元素索引 获取第index个元素
//eletype getelement(sequentiallist* list, int index) {
//	if (index < 0 || index >= list->size) {
//		throw std::invalid_argument("invalid index");
//	}
//	return list->elements[index];
//}
//
////实现第index个的元素的修改
//void updateelement(sequentiallist* list, int index, eletype value) {
//	list->elements[index] = value;
//}
//
//
////
//
//int main() {
//	int n;
//	while (cin >> n) {
//		int prod = 1;
//		sequentiallist s;
//		initializelist(&s, 1);
//		for (int i = 0;i < n; i++) {
//			int x;
//			cin >> x;
//			insert(&s, i, x);
//		}
//		for (int i = 0;i < s.size;i++) {
//			if ((getelement(&s, i) & 1) == 1) {
//				prod = prod * getelement(&s, i);
//			}
//		}
//		cout << prod << endl;
//	}
//	
//	return 0;
//}