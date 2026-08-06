//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n;
//	while (cin >> n) {
//		int scores[100];
//		int cnt = 0;
//		double final_score = 0;
//		double sum = 0;
//		
//
//		for (int i = 0; i < n; i++) {
//			cin >> scores[i];
//			cnt++;
//		}
//		std::sort(scores, scores + n);	//从小到大排序
//		for (int i = 1;i < n - 1;i++) {
//			sum += scores[i];
//		}
//		final_score = sum / (n - 2);
//		printf("%.2lf\n", final_score);
//	}
//	return 0;
//}