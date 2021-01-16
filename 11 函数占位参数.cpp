#include<iostream>
using namespace std;
#include<string>

/*
函数占位参数
	只填数据类型
目前阶段用不到
占位参数可以使用默认参数
*/

void func11(int a,int = 10) {//占位加默认参数
	cout << "this is a function" << endl;
}

int fun11() {

	func11(10, 9);
	system("pause");
	return 0;
}