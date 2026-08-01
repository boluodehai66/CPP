#include <iostream>
using namespace std;

int main5_7() {
	string s1 = "Heworld";
	s1.insert(2, 2, 'l');	//在第几个位置插入几个什么元素 第x个元素前边
	cout << s1 << endl;

	s1.insert(4, "o ");
	cout << s1 << endl;

	s1.insert(s1.size(), "heiheihei");	//在末尾插入
	cout << s1 << endl;
	return 0;
}