//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	int s, v, sum, mint,t,h,m,tf;
//	sum = 24 * 60;
//	cin >> s >> v;
//	mint = 10 + ceil((double)s / v);
//	t = sum - mint;
//	h = t / 60;
//	m = t - h * 60;
//	tf = 8 + h;
//	if (tf >= 24) {
//		tf -= 24;
//		if (m > 9) {
//			cout << "0" << tf << ":" << m << endl;
//		}
//		else {
//			cout << "0" << tf << ":0" << m << endl;
//
//		}
//	}
//	else {
//		if (m > 9) {
//			cout << tf << ":" << m << endl;
//		}
//		else {
//			cout << tf << ":0" << m << endl;
//
//		}
//	}
//	return 0;
//}