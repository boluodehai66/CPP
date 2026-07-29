//#include <iostream>
//#include <vector>
//using namespace std;
//
//void printVector(vector<int>& v) {
//	for (vector<int>::iterator iter = v.begin(); iter < v.end(); iter++) {
//		cout << *iter << ' ';
//	}
//	cout << endl;
//}
///*
//	容量：capacity() 碗有多大
//	大小： size()	碗已经盛了多少饭
//*/
//
//int main4_6() {
//	vector<int> v1 = { 1,2,3,4 };
//	cout << "v1.size() = " << v1.size() << endl;
//	cout << "v1.capacity() = " << v1.capacity() << endl;
//
//	//当容量和大小一样时，再进行插入 容量会扩大到原来的1.5倍
//	//向下取整
//	v1.push_back(6);
//	cout << "v1.size() = " << v1.size() << endl;
//	cout << "v1.capacity() = " << v1.capacity() << endl;
//
//	//修改size大小 没有元素的地方默认为0
//	v1.resize(10);
//	cout << "v1.size() = " << v1.size() << endl;
//	cout << "v1.capacity() = " << v1.capacity() << endl;
//	printVector(v1);
//	
//	//resize(扩容后的大小，x)
//	//修改size大小 并把没有元素的地方设置为x
//	v1.resize(12, 9);
//	cout << "v1.size() = " << v1.size() << endl;
//	cout << "v1.capacity() = " << v1.capacity() << endl;
//	printVector(v1);
//
//	//当size比较大的时候 capacity和size一致
//	v1.resize(100);
//	cout << "v1.size() = " << v1.size() << endl;
//	cout << "v1.capacity() = " << v1.capacity() << endl;
//	printVector(v1);
//
//	//缩容操作不会改变capacity大小 只会改变size大小和里面的元素
//	v1.resize(4);
//	cout << "v1.size() = " << v1.size() << endl;
//	cout << "v1.capacity() = " << v1.capacity() << endl;
//	printVector(v1);
//	return 0;
//}