#include<iostream>
using namespace std;
#include<string>

//
void showValue(const int& v) {//const不是为了什么功能，只是为了提醒自己不想修个实参
	//v = 1000;
	cout << v << endl;
}

int main() {

	int a = 100;
	//编译器修改为 int temp=10; int& ref = temp;
	//const int& ref = 10;//引用必须引用一个合法的内存空间
	//加入const变成只读
	showValue(a);
	cout << a << endl;

	system("pause");
	return 0;
}
//p95