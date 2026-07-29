#include <iostream>
#include <string>
using namespace std;

int main12() {
	//1.利用指针来访问数组元素
	int a[5] = { 5,4,3,2,1 };
	int* p = a;	//a代表a数组的首地址 也就是第一个元素的地址
	cout << "first element:" << a[0] << endl;
	cout << "pointer: first element:" << *p << endl;

	cout << "first adress:" << a << endl;
	cout << "pointer: first adress:" << p << endl;

	p++;
	cout << "second adress:" << &a[1] << endl;
	cout << "pointer: second adress:" << p << endl;
	cout << "second element:" << a[1] << endl;
	cout << "pointer: second element:" << *p << endl;

	p = a;
	for (int i = 0; i < 5; i++) {
		cout << "the" << (i + 1) << "element is:" << *p << endl;
		p++;
	}

	//数组指针 用指针表示数组
	//二维数组
	int b[4][5] = {
		{1,2,3,4,5},	//-> p
		{2,3,4,5,6},	//-> p+1
		{3,4,5,6,7},
		{5,6,7,8,9},
	};
	int (*pb)[5];
	pb = b;
	cout << pb << endl;
	cout << b << endl;

	//指针数组 是一个数组 数组中的每个元素都是指针
	char x[] = "I";
	char y[] = "Love";
	char z[] = "You";
	char* px[3];
	px[0] = x;
	px[1] = y;
	px[2] = z;
	for (int i = 0;i < 3;i++) {
		cout << *px[i] << ' '<< endl;//解引用了 只读取第一个地址对应的字符
		cout << px[i] << ' ' << endl;//会顺着字符串的首字符的地址一直读下去
	}

	int mat[3][4] = {
		{1,2,3,4},	//->mat[0] pmat[0]
		{2,3,4,5},
		{3,4,5,6},
	};
	int* pmat[3];
	pmat[0] = mat[0];//mat[0] 表示第一行的首地址
	pmat[1] = mat[1];
	pmat[2] = mat[2];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4;j++) {
			cout << *(pmat[i] + j);
		}
		cout << endl;
	}
	return 0;
}	