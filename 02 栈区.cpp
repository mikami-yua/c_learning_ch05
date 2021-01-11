#include<iostream>
using namespace std;
#include<string>


/*
编译器自动分配释放，存放函数的参数值，局部变量等
【注意】不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
*/

int* func(int b) {//形参也放在栈区
	b = 100;
	int a = 10;//局部变量存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;
}
int fun2() {

	int* p = func(1);
	cout << *p << endl;//10---正确是因为编译器做了保留
	cout << *p << endl;//2040777200---编译器只做异常保留

	system("pause");
	return 0;
}