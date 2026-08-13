//#include <iostream>
//using namespace std;
//
//#define eleType double
//
//struct List {
//	eleType* elements;
//	int size;
//	int capacity;
//};
//
//void initializeList(List* list, int capacity) {
//	list->elements = new eleType[capacity];
//	list->size = 0;
//	list->capacity = capacity;
//}
//
//void destroyList(List* list) {
//	delete[] list->elements;
//}
//
//int size(List* list) {
//	return list->size;
//}
//
//bool isEmpty(List* list) {
//	return list->size == 0;
//}
////增
//void insert(List* list, int index, eleType element) {
//	if (index < 0 || index > list->size) {
//		throw std::invalid_argument("Invalid index");
//	}
//	if (list->size == list->capacity) {
//		int newcapacity = list->capacity * 2;
//		eleType* newelements = new eleType[newcapacity];
//		for (int i = 0;i < list->size;i++) {
//			newelements[i] = list->elements[i];
//		}
//		delete[] list->elements;
//		list->elements = newelements;
//		list->capacity = newcapacity;
//	}
//	for (int i = list->size; i > index; i--) {
//		list->elements[i] = list->elements[i - 1];
//	}
//	list->elements[index] = element;
//	list->size++;
//}
////删
//void deleteList(List* list) {
//
//}
////改
////查
//
//
//int main() {
//
//	return 0;
//}