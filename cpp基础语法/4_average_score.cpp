#include <iostream>
using namespace std;

/*
 n个学生 m科考试 
*/
double a[51][6];
double ca[6];
double sa[51];

int main2() {
	int n, m;
	while (cin >> n >> m) {
		for (int i = 0;i < n; i++) {
			for (int j = 0; j < m;j++) {
				cin >> a[i][j];
			}
		}
	}
	//求每个学生自己的平均成绩
	for (int i = 0;i < n;i++) {
		sa[i] = 0;
		for (int j = 0;j < m;j++) {
			sa[i] += a[i][j];
		}
		sa[i] /= m;
	}
	//求所有学生每科的平均成绩
	for (int i = 0;i < m;i++) {
		ca[i] = 0;
		for (int j = 0;j < n;j++) {
			ca[i] += a[j][i];
		}
		ca[i] /= n;
	}
	//枚举每名学生成绩超过平均分的
	int cnt = 0;
	for (int i = 0;i < n; i++) {
		int sum = 0;//每位同学计分 看有几门学科超过平均分
		for (int j = 0;j < m; j++) {
			sum += (a[i][j] > ca[j]);
		}
		if (sum == m) {
			cnt += 1;
		}
	}
	//输出每个学生的平均成绩
	for (int i = 0;i < n; i++) {
		if (i) {
			cout << ' ';
		}
		printf("%.2lf", sa[i]);
	}
	cout << endl;
	//输出每门课程的平均成绩
	for (int i = 0;i < m; i++) {
		if (i) {
			cout << ' ';
		}
		printf("%.2lf", ca[i]);
	}
	cout << endl;
	cout << cnt << endl;
	return 0;
}