//#include <iostream>
//using namespace std;
//
//int main() {
//	//1.compare
//	//字符串长度相等时 先比较首位 相同才继续比较下一位
//	string s1 = "aab";
//	string t11 = "aab";
//	int r11 = s1.compare(t11); // < + > 三值 不能用bool -1 0 1
//	cout << s1 << " compare " << t11 << " -> " << r11 << endl;
//
//	string t12 = "aaa";
//	int r12 = s1.compare(t12); 
//	cout << s1 << " compare " << t12 << " -> " << r12 << endl;
//
//	string t13 = "aac";
//	int r13 = s1.compare(t13);
//	cout << s1 << " compare " << t13 << " -> " << r13 << endl;
//
//	//字符串长度不等
//	//前长后短为1； 前短后长为-1
//	string t14 = "aaba";
//	int r14 = s1.compare(t14);
//	cout << s1 << " compare " << t14 << " -> " << r14 << endl;
//
//	string t15 = "aa";
//	int r15 = s1.compare(t15);
//	cout << s1 << " compare " << t15 << " -> " << r15 << endl;
//
//	//2.< > =  <= >=
//	//只有是与否 返回0和1
//	cout << s1 << " == " << t11 << " -> " << (s1 == t11) << endl;
//	cout << s1 << " != " << t11 << " -> " << (s1 != t11) << endl;
//	cout << s1 << " < " << t12 << " -> " << (s1 < t12) << endl;
//
//
//	return 0;
//}