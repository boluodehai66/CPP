//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main2_2() {
//	int n;
//	cin >> n;
//	string s;
//	cin >> s;
//	cout << s << endl;
//	for (int i = 0; i < n; i++) {
//		int cnt = 0;
//		if (n == 1 && s[i] == 'x') {
//			cout << i << endl;
//			break;
//		}
//		else if (s[i] == 'o') {
//			cnt += 1;
//			if (cnt == n) {
//				cout << 0 << endl;
//				break;
//			}
//		}
//		else if (s[i] == 'o' && s[i - 1] == 'x' && s[i + 1] == 'x') {
//			cout << i << endl;
//			break;
//		}
//	}
//	return 0;
//}