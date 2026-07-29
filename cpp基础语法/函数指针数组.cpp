#include <iostream>
using namespace std;

typedef void (*fptrs[]) (int a, int b, double c, float d, char e);
typedef void (*fptr) (int a, int b, double c, float d, char e);

void func1(int a, int b, double c, float d, char e) {
	cout << "func1" << endl;
}
void func2(int a, int b, double c, float d, char e) {
	cout << "func2" << endl;
}
void func3(int a, int b, double c, float d, char e) {
	cout << "func3" << endl;
}

int main15() {
	//int a[] = {1,2,3};
	fptrs fps = { func1, func2, func3 };
	fptr fp[] = { func1, func2, func3 };
	return 0;
}