#include <iostream>
using namespace std;

int& getArrayValue(int arr[], int index) {
	return arr[index];
}

int main23() {
	int a[] = { 1,2,3,4,5,6, };
	cout << getArrayValue(a, 3) << endl;
	getArrayValue(a, 3) = 999;			//a[3] = 999;
	cout << getArrayValue(a, 3) << endl;

	return 0;
}