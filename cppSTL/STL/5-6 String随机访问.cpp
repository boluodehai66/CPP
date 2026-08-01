#include <iostream>
using namespace std;

int main5_6() {
	string s = "I love you 1314";
	//1.随机访问
	cout << s << endl;
	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << ' ';
		//cout << s.at(i) << '';	会检测异常 其他二者完全一样
	}
	cout << endl;
	
	//2.修改
	s[11] = '5';
	s[12] = '2';
	s.at(13) = '0';
	cout << s << endl;

	return 0;
}