//#include <iostream>
//#include <vector>			//vector实际上是一个类
//using namespace std;		//创建vector实际上就是实例化一个类
//
////遍历输出vector中元素
//void printVector(vector<int>& v) {
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << ' ';
//	}
//	cout << endl;
//}
//
//
//using namespace std;
//
//int main4_2() {
//	//1.默认构造函数 不会放任何东西进去
//	vector<int> v1;
//	cout << "v1:";
//	printVector(v1);
//
//	//2.初始化列表
//	//int a[5] = {1,2,3,4,5};
//	//隐式构造
//	vector<int> v2_1 = { 1,2,3,4,5 };
//	cout << "v2_1:";
//	printVector(v2_1);
//	//有参构造
//	vector<int> v2_2({ 1,2,3,4,5 });
//	cout << "v2_2:";
//	printVector(v2_2);
//
//	//3.迭代器
//	vector<int> v3(v2_1.begin(), v2_1.end());
//	cout << "v3:";
//	printVector(v3);
//
//	//4.全0初始化
//	vector<int> v4(8);
//	cout << "v4:";
//	printVector(v4);
//
//	//5. vector<int> 变量名(a，b);  申请a个空间的元素，每个元素初始化为b
//	vector<int> v5(8, 6);
//	cout << "v5:";
//	printVector(v5);
//
//	//6.拷贝构造函数
//	vector<int> v6(v2_2);
//	cout << "v6:";
//	printVector(v6);
//
//	return 0;
//}