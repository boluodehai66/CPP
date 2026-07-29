//#include <iostream>
//using namespace std;
//
////指针函数
//int* getArray(int a, int d, int n) {
//	int* ret = new int[n];//申请一个动态内存地址
//	//ret[0] = a
//	//ret[1] = a + d
//	//ret[i] = a + i * d
//	for (int i = 0; i < n; i++) {
//		ret[i] = a + i * d;
//	}
//	return ret;	
//}
//
//int main14() {
//	int* ans = getArray(5, 3, 6);
//	for (int i = 0; i < 6;i++) {
//		cout << *(ans + i) << endl;
//	}
//	for (int i = 0; i < 6;i++) {
//		cout << ans[i] << endl;
//	}
//	return 0;
//}