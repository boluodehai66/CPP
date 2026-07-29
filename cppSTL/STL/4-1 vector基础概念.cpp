#include <iostream>
#include <vector>

using namespace std;
//vector 可以进行动态扩容
int main4_1() {
	int a[6] = { 1,2,3,4,5,6 };
	vector<int> v = { 2,0,2,6 };
	cout << v.capacity() << endl;	//输出v的容量 应该为4
	v.push_back(7);
	cout << v.capacity() << endl;
	//begin指向数组的首地址 相当于v[0]
	//end指向数组末尾地址 相当于最后一个元素的后一位地址
	//因此end在解引用的时候要-1 因为数组是左闭右开区间 最后一个位置没有元素
	//front和back分别指向数组的首个元素 和末尾元素
	cout << "begin->" << *v.begin() << endl;
	cout << "end->" << *(v.end() - 1) << endl;

	cout << "front:" << v.front() << endl;
	cout << "back:" << v.back() << endl;


	return 0;
}