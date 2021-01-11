#include<iostream>
using namespace std;
#include<string>

/*
引用的基本使用
	作用：给变量起别名
	语法： 数据类型 &别名=原名

引用的注意事项
	引用必须初始化
	引用初始化之后就不能再改变了
*/

int fun5() {

	int a = 10;
	int& b = a;
	cout << a << " " << b << endl;
	b = 100;
	cout << a << " " << b << endl;

	system("pause");
	return 0;
}