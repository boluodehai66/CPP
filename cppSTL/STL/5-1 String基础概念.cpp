#include <iostream>
//iostream中包含了string头文件
//#include <string>
using namespace std;

int main5_11() {
	//c语言风格字符串
	char a[100] = "xiaoyu";
	cout << a << endl;
	cout << (void*)a << endl; //地址

	//CPP风格字符串
	string b = "xiaoyuyu";
	cout << b << endl;

	//两者区别在于 char需要提前给定字符串长度 
	// 但是string不需要 string会根据实际长度进行扩容
	return 0;
}