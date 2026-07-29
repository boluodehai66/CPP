//#include <iostream>
//using namespace std;
//
//
//struct Info {
//	char _name[20];
//	int _role;
//	union {
//		double score;
//		char course[20];
//	}_sc;
//
//
//	Info(const char name[20], int role, double s, const char c[20]) {
//		strcpy_s(_name, name);
//		_role = role;
//		if (s > 0) _sc.score = s;
//		if (strlen(c) > 0) strcpy_s(_sc.course, c);
//	}
//
//};
//
//
//int main21() {
//	Info a[4] = {
//		Info("zhou", 0, -1, "cpp"),
//		Info("zhou", 0, -1, "python"),
//		Info("liang", 1, 99, ""),
//		Info("wang", 1, 100, ""),
//	};
//	for (int i = 0; i < 4; i++) {
//		if (a[i]._role == 0) {
//			cout << a[i]._name << "shiyiweijiao" << a[i]._sc.course << "delaoshi" << endl;
//		}
//		else if (a[i]._role == 1) {
//			cout << a[i]._name << "shiyiweiyongxue,tadechengjishi" << a[i]._sc.score << endl;
//
//		}
//	}
//	return 0;
//}