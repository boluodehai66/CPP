//#include <iostream>
//using namespace std;
//
//int main() {
//	int m, n;
//	while (cin >> m >> n) {
//		int s[3];
//		int flag = 1;
//		for (int i = m; i <= n; i++) {
//			s[0] = i % 10;
//			s[1] = i / 10 % 10;
//			s[2] = i / 100;
//			
//			if ((s[0] * s[0] * s[0] + s[1] * s[1] * s[1] + s[2] * s[2] * s[2]) == i) {
//				cout << i << " ";
//				flag = 0;
//			}
//			
//		}
//		if (flag) {
//			cout << "no";
//		}
//		cout << endl;
//	}
//	return 0;
//}