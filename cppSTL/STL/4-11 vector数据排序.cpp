#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printVector(const vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

bool cmp(int a, int b) {
	return a > b;
}

int main4() {
	vector<int> v = { 9,8,7,1,2,3,4 };
	sort(v.begin(), v.end(), cmp);	//默认是递增排序
	printVector(v);					//引入cmp  a>b是递减排序 反之则是递增
	return 0;
}