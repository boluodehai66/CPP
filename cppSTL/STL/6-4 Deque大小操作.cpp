#include <iostream>
#include <deque>
using namespace std;

/*
	1.empty		询问是否为空
	2.sizse		查看大小
	3.resieze	重新定义大小
*/

int main6_4() {
	deque<int> d;
	cout << "d.empty() = " << d.empty() << endl;	//1为空 0不为空
	cout << "d.size()  = " << d.size() << endl;

	return 0;
}