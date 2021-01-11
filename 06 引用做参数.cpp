#include<iostream>
using namespace std;
#include<string>
//交换函数

//1.值传递
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
//2.地址传递
void swap02(int* a, int* b) {//用指针接收地址
	int temp = *a;//*a解引用
	*a = *b;
	*b = temp;
}

//3,引用传递------形参也会修改实参
void swap03(int& a, int& b) {//这个a就是原来的a（别名和原名一样）
	int temp = a;
	a = b;
	b = temp;
}

int fun6() {
	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << "a=" << a << "   " << "b=" << b << endl;
	swap02(&a,&b);
	cout << "a=" << a << "   " << "b=" << b << endl;
	a = 10;
	b = 20;
	swap03(a, b);
	cout << "a=" << a << "   " << "b=" << b << endl;

	system("pause");
	return 0;
}