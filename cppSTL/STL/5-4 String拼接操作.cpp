#include <iostream>
using namespace std;

// strcat

int main5_4() {
	//1. + 运算符重载
	string s1 = "xiao";
	string t1 = "yuyu";
	s1 = s1 + "bb";			//const char*
	cout << s1 << endl;
	s1 = s1 + t1;			//const string&
	cout << s1 << endl;
	s1 = s1 + ';';			//char
	cout << s1 << endl;

	//2. +=
	s1 += "yuyuyuyu";
	cout << s1 << endl;
	
	//3.函数append
	string s2 = "xiao";
	string t2 = "liang";
	s2.append("liangliang");
	s2.append(t2);
	s2.append("5201314", 3);	//3代表个数
	cout << s2 << endl;
	s2.append("5201314", 3, 4);	//3代表位置
	cout << s2 << endl;

	//3. push_back
	string s3 = "xiaoyu";
	s3.push_back('6');		//只能添加const char 也就是字符型
	cout << s3 << endl;

	return 0;
}