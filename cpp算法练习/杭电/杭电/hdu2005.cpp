//#include <iostream>
//using namespace std;
//
//int main() {
//	int year, month, day, sum;
//	char slash1, slash2;
//	int days_in_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//	while (cin >> year >> slash1 >> month >> slash2 >> day) {
//		sum = 0;
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//			days_in_month[2] = 29;
//		}
//		else {
//			days_in_month[2] = 28;
//		}
//		for (int i = 0; i < month;i++) {
//			sum += days_in_month[i];
//		}
//		sum += day;
//		cout << sum << endl;
//	}
//	return 0;
//}