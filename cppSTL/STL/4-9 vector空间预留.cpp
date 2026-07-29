//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	vector<int> v;
//
//	//每次扩容都要移动数据 耗时 可以提前预留capacity
//	v.reserve(100); 
//	for (int i = 0; i < 100; i++) {
//		cout << "size = " << v.size() << "; " << "capacity = " << v.capacity() << endl;
//		v.push_back(i);
//	}
//
//	//reserve 修改的是capacity
//	//resize 修改的是size
//	return 0;
//}