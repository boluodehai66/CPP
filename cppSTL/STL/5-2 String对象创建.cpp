#include <iostream>
using namespace std;

int main() {
	//1.无参构造
	string s1;	//构造一个空字符串
	cout << s1 << endl;

	//2.初始化列表
	string s2({ 'h','e','l','l','o' });
	cout << s2 << endl;

	//3.字符串的初始化
	string s3("yuyuy");
	cout << s3 << endl;

	//4.字符串的前n个字符
	string s4("xiaoyuyuyuyu", 6);
	cout << s4 << endl;
	return 0;
}