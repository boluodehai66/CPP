#include <iostream>
#include <set>
#include <vector>
using namespace std;

void printSet(const set<int>& s) {
	for (set<int> ::const_iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//count 返回值只能是0或1

int main() {
	set<int> s = { 1,2,3,4,5 };
	for (int i = 0; i < 8; i += 2) {
		cout << "element: " << i << " times: " << s.count(i) << endl;
	}
	
	multiset<int> ms = { 1,1,1,1,1,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,6,9,7,8 };
	for (int i = 0; i < 8; i += 2) {
		cout << "element: " << i << " times: " << ms.count(i) << endl;
	}
	return 0;
}