#include<iostream>
using namespace std;
#include<string>
/*
【注意】：不要返回局部变量的引用
用法：函数调用为左值
*/
int& test01() {
	int a = 10;//局部变量存放再栈区
	return a;
}

int& test02() {
	static int a = 10;//静态变量，存放再全局区。延长了变量的声明周期
	return a;
}


int fun7() {
	int& ref = test01();
	cout << ref << endl;//10---编译器做了保留
	cout << ref << endl;//2040777200---编译器已经释放内存

	int& ref1 = test02();
	cout << ref1 << endl;//10
	cout << ref1 << endl;//10 a没有被释放
	//函数的返回值是引用则函数的调用可以作为左值
	test02() = 1000;
	cout << ref1 << endl;//1000
	cout << ref1 << endl;//1000



	system("pause");
	return 0;
}