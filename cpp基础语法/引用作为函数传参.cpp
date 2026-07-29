#include <iostream>
using namespace std;

int countAndSum(int arr[], int size, int target, int& count) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			sum += arr[i];
			count++;
		}
	}
	return sum;
}

int main22() {
	int arr[] = { 1,2,3,4,5,2,13,2,2,6 };
	int c = 0;
	int sum = countAndSum(arr, 10, 2, c);	//c和count的地址是一样的 
											//因此在函数中修改count的值也即是直接修改了c的值
	cout << sum << c << endl;

	return 0;
}