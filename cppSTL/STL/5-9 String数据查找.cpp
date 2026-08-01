#include <iostream>
using namespace std;
//在一个字符串中查找另一个字符串是否存在
//并返回第一个相同的下标
int main5_9() {
	string s1;

	//1.找到字符串并返回相同字符的首个位置
	s1 = "Hello woooorld";
	cout << s1.find("oooo") << endl;	//返回一个位置

	//2.从第x位置开始寻找 未找到返回-1
	cout << (int)s1.find("oooo", 8) << endl;

	//3.多个相同字符的时候 返回第一个相同字符的位置
	cout << s1.find('o') << endl;	//返回找到相同字符的第一个位置
	cout << s1.find('o', s1.find('o') + 1) << endl;

	//4.从右边寻找 返回的也是最左边（最小值）的下标
	cout << s1.rfind("oo") << endl;

	return 0;
}