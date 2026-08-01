#include <iostream>
using namespace std;

int main5_2() {
	//1.无参构造
	string s1;	//构造一个空字符串
	cout << s1 << endl;

	//2.初始化列表
	string s2({ 'h','e','l','l','o' });
	cout << s2 << endl;

	//3.字符串的初始化
	string s3("yuyuy");
	cout << s3 << endl;

	//4.字符串的前n个字符 字符串长度就变成了n
	string s4("xiaoyuyuyuyu", 6);
	cout << s4.size() << endl;
	cout << s4[2] << endl;	//中括号直接访问
	cout << s4 << endl;

	//5.拷贝构造 直接拷贝已经定义好的字符串
	string s5(s4);
	cout << s5 << endl;

	//6.a个字符b string 名称(数字，字符)； 
	//初始化多少个什么字符
	string s6(8, 'o');
	cout << s6 << endl;
	return 0;
}