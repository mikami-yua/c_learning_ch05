#include<iostream>
using namespace std;
#include<string>

/*
函数的重载
	提高函数的复用性
	条件：
		同一个作用域下
		函数名相同
		函数的参数类型不用，或者函数的参数个数，或者顺序不同

	函数的返回值不能作为函数的重载条件(无法重载仅有返回值不同的函数)

	引用和重载
		const可以作为重载的条件
	默认参数和重载
		使用重载时避免使用默认参数。不是一定会错，容易出现问题
*/
void func12() {//都在全局作用域下
	cout << "func is running" << endl;
}

void func12(int a) {
	cout << "func(int a) is running" << endl;
}
void func12(double a) {
	cout << "func(double a) is running" << endl;
}
void func12(double a,int b) {
	cout << "func(d,i) is running" << endl;
}
void func12(int a, double b) {
	cout << "func(d,i) is running" << endl;
}

void func121(int& a) {//int &a=10(引用必须是合法的内存数据，要么在栈上，要么在堆上。10在常量区)
	cout << "func& is running" << endl;
}
void func121(const int& a) {//const int& a=10 加上const编译器给代码做了优化，创建临时数据，a指向临时的空间	 
	cout << "func c & is running" << endl;
}

void func122(int a) {
	cout << "func122 is running" << endl;
}
void func122(int a,int b=10) {
	cout << "func122 2 is running" << endl;
}

int main() {

	func12();
	func12(10);
	func12(3.14);
	
	int a = 10;
	func121(a);
	func121(10);

	//func122(10);程序出现二义性，会报错

	system("pause");
	return 0;
}