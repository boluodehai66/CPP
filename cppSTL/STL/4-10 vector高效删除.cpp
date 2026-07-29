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
////remove1是按照顺序删除的 remove2是乱序的 因此两个算法最终的结果并不一样
////如果知道要删除的元素的位置 那么2的效率更高 
////如果不知道 而是要删除某个位置之后的全部元素 也可以选择2
//void remove1(vector<int>& v, int index) {
//	v.erase(v.begin() + index); //删除第index个元素
//}
//
//void remove2(vector<int>& v, int index) {
//	swap(v[index], v.back());
//	v.pop_back();
//}
//
//int main() {
//	vector<int> v;
//	//for (int i = 0;i < 300004; i++) {
//	//	v.push_back(i);
//	//}
//	//for (int i = 0; i < 300000; i++) {
//	//	remove1(v, 4);
//	//}
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	remove2(v, 4);	//元素顺序会发生改变 因为用了swap
//	printVector(v);	//在不考虑元素顺序的时候可以用这个方法
//
//	return 0;
//}