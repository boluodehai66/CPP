//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int x, y;
//	while (cin >> x >> y) {
//		if (x == 0 && y == 0) {
//			break;
//		}
//
//		if (x > y) {
//			swap(x, y);
//		}
//
//		for (int i = x;i <= y;i++) {
//			int flag = 1;
//			int n = i * i + i + 41;
//
//			for (int j = 2; j < ceil(n / 2.0);j++) {
//				if (n % j == 0) {
//					cout << "Sorry" << endl;;
//					break;
//				}
//				else {
//					flag = 1;
//				}
//			}
//			
//		}
//		cout << "OK" << endl;
//	}
//	return 0;
//}