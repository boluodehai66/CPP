#include <iostream>
using namespace std;

int main5_10() {
	string s;

	//1.从第几个位置开始 选择几个元素 变成什么
	s = "Hello woooorld";
	s.replace(7, 5, "or");	
	cout << s << endl;

	//2.迭代器传输位置 可以进行偏移
	s = "Hello woooorld";
	s.replace(s.begin() + 7, s.begin() + 12, "or");	//左闭右开区间
	cout << s << endl;

	//3.取前几个字符
	s = "Hello woooorld";
	s.replace(s.begin() + 7, s.begin() + 12, "ordsadwsadcxvtjchyguftir",2);	
	cout << s << endl;
	return 0;
}