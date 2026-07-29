#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/*
	输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
	输入数据有多组，每组占一行，有三个字符组成，之间无空格。
	对于每组输入数据，输出一行，字符中间用一个空格分开。
*/
int main6() {
	string s;
	while (cin >> s) {
		sort(s.begin(), s.end());
		cout << s[0] << ' ' << s[1] << ' ' << s[2] << endl;
	}

	return 0;
}