#include<iostream>
using namespace std;
#include<string>

//发现是引用 自动转换为 int* const ref=&a 
void func2(int &ref) {
	ref = 100;
}

int fun8() {
	int a = 10;

	//自动转换为 int* const ref=&a 
	int& ref = a;//ref内部放的是a的地址（ref内部不能改变，地址指向的值可以改变）
	ref = 20;//c++发现ref是引用，帮我们转换为*ref=20;（解引用）


	cout << a << endl;
	cout << ref << endl;

	func2(a);
	

	system("pause");
	return 0;
}