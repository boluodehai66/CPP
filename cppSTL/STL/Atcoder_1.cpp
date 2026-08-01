#include <iostream>
#include <vector>
using namespace std;

int ans(int k, int n) {
	return k - n + 1;
}
int main11() {
	int k, n;
	cin >> k >> n;
	cout << ans(k, n) << endl;

	
	return 0;
}