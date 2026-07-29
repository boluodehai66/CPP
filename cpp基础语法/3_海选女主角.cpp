//#include <iostream> 
//#include <cmath>
//using namespace std;
///*
//	持续输入m*n个数据 
//	输出绝对值最大的所对应的数字
//	
//*/
//int a[1000][1000];
//
//int main1() {
//	int m, n;
//	int max = -1,r, c;
//
//	while (cin >> m >> n) {
//		for (int i = 0;i < m;i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> a[i][j];
//			}
//		}
//		for (int i = 0;i < m; i++) {
//			for (int j = 0;j < n; j++) {
//				int x = abs(a[i][j]);
//				if (x > max) {
//					max = x;
//					r = i;
//					c = j;
//				}
//			}
//		}
//		cout << r+1 << ' ' << c+1 << ' ' << a[r][c] << endl;
//	}
//	return 0;
//}