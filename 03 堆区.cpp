#include<iostream>
using namespace std;
#include<string>

int* func() {//形参也放在栈区
	//利用new关键字可以把内存开辟到堆区
	int* p = new int(10);//把开辟的内存地址告诉指针
	/*
	指针本质也是局部变量，放在栈上，指针保存的数据是放在堆区
	用栈上的指针保存堆区的地址编号
	*/


	return p;
}

int fun3() {

	int* p = func(); 
	cout << *p << endl;//10
	cout << *p << endl;//10

	system("pause");
	return 0;
}