//#include <iostream>
//using namespace std;
//
//double Sum(double n) {
//	double sum = 0;
//	for (int i = 1;i <= n;i++) {
//		if ((i & 1) == 1) {
//			sum += 1.0 / i;
//		}
//		else {
//			sum += -1.0 / i;
//		}
//	}
//	return sum;
//}
//
//int main() {
//	double n, m;
//	while (cin >> m) {
//		for (int i = 0;i < m;i++) {
//			cin >> n;
//			printf("%.2lf\n", Sum(n));
//		}
//	}
//	return 0;
//}