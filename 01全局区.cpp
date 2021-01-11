#include<iostream>
using namespace std;
#include<string>

//全局变量
int g_a = 10;
int g_b = 10;
const int g_c = 10;

int fun1() {
	//全局区
	/*
	全局变量  静态变量  常量
	*/

	//普通局部变量
	int a = 10;
	int b = 10;
	 
	cout << "address of a " << &a << endl;//00EFFC08
	cout << "address of b " << &b << endl;//00EFFBFC
	cout << "address of ga " << &g_a << endl;//009FC034
	cout << "address of gb " << &g_b << endl;//009FC038

	//静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "address of s_a " << &s_a << endl;
	cout << "address of s_b " << &s_b << endl;
	/*
	address of a 00D3F7B0
	address of b 00D3F7A4
	address of ga 00D8C034
	address of gb 00D8C038
	address of s_a 00D8C03C
	address of s_b 00D8C040
	*/

	//常量
	//字符串常量
	string s = "hello world";
	cout << "adress of s " << &s << endl;
	//const修饰的常量
	//const修饰的全局变量
	cout << "adress of g_c " << &g_c << endl;
	//const修饰的局部变量-----不放在常量区 
	const int c_a = 10;
	cout << "address of c_a" << &c_a << endl;
	/*
	address of a 005BF728
	address of b 005BF71C
	address of ga 00441000
	address of gb 00441004
	address of s_a 00441008
	address of s_b 0044100C
	adress of s 005BF6F8
	adress of g_c 0043DB3C
	address of c_a005BF6EC
	*/





	system("pause");
	return 0;
}