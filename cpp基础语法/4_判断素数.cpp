#include <iostream>
using namespace std;

/*
 对于表达式n^2+n+41，
 当n在（x,y）范围内取整数值时（包括x,y）(-39<=x<y<=50)，
 判定该表达式的值是否都为素数。
 输入数据有多组，每组占一行，由两个整数x，y组成，当x=0,y=0时，表示输入结束，该行不做处理。
 对于每个给定范围内的取值，如果表达式的值都为素数，则输出"OK",否则请输出“Sorry”,每组输出占一行。
*/

bool isPrime(int x) {
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) {
			return false;
		}
		else {
			return true;
		}
	}
}

int main8() {

	int x, y;
	while (cin >> x >> y) {
		if (!x && !y) {
			break;
		}
		bool flag = false;
		for (int i = x; i <= y;i++) {
			int z = i * i + i + 41;
			if (!isPrime(z)) {
				flag = true;
				break;
			}
			
		}
		if (flag == false) {
			cout << "OK" << endl;
		}
		else {
			cout << "Sorry" << endl;
		}
	}
	//int x, y;
	//while (cin >> x >> y) {
	//	if ((x == 0) && (y == 0)) {
	//		break;
	//	}
	//	else {
	//		if (isPrime(x) && isPrime(y)) {
	//			cout << "OK" << endl;
	//		}
	//		else {
	//			cout << "Sorry" << endl;
	//		}
	//	}
	//}

	return 0;
}