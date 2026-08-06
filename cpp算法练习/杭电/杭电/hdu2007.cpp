//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int m, n;
//	
//	while (cin >> m >> n) {
//		long long odd = 0;	//奇数
//		long long even = 0;	//偶数
//
//		if (m > n) {
//			swap(m, n);
//		}
//
//		for (int i = m;i <= n;i++) {
//			if ((i & 1) == 0) {
//				even += i * i;
//			}
//			else {
//				odd += i * i * i;
//			}
//		}
//		cout << even << " " << odd << endl;
//	}
//
//	return 0;
//}