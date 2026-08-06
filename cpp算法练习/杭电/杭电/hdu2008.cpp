//#include <iostream>
//using namespace std;
//
//int main() {
//	int n;
//	double num[100];
//
//	while (cin >> n && n != 0) {	//n=0 直接结束 不进入循环
//		//if (n == 0) {
//		//	break;
//		//}
//		int cnt1 = 0, cnt2 = 0, cnt3 = 0;
//
//		for (int i = 0; i < n; i++) {
//			cin >> num[i];
//
//			if (num[i] > 0) {
//				cnt1 += 1;
//			}
//
//			else if (num[i] < 0) {
//				cnt2 += 1;
//			}
//
//			else if (num[i] == 0) {
//				cnt3 += 1;
//			}
//		}
//		cout << cnt2 << " " << cnt3 << " " << cnt1 << endl;
//	}
//	return 0;
//}