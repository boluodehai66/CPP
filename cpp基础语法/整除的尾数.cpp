#include <iostream>
using namespace std;

int* calcTail(int a, int b, int* returnSize) {
	*returnSize = 0;
	int* ret = new int[100];
	for (int i = 0; i < 100; i++) {
		if ((a * 100 + i) % b == 0) {
			ret[(*returnSize)++] = i;
		}
	}
	return ret;
}

int main16() {
	int a, b;
	while (cin >> a >> b) {
		if (!a && !b) {
			break;
		}
		int size;
		int* ret = calcTail(a, b, &size);
		for (int i = 0; i < size;i++) {
			if (i) {
				cout << ' ';
			}
			if (ret[i] < 10) {
				cout << '0';
			}
			cout << ret[i];
		}
		cout << endl;
		delete[] ret;
	}
	return 0;
}