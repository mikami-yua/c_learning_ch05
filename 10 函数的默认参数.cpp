#include<iostream>
using namespace std;
#include<string>

/*
函数的默认参数
	自己传入了数据使用自己的值
【注意】：
	某个位置有了默认参数，从左向右，后面都必须有默认参数
	如果函数的声明有了默认参数，函数的实现不能有默认参数（只能有一个地方有默认参数）
*/
int func(int a, int b=20, int c=30) {
	return a + b + c;
}

//int func2(int a = 10, int b = 10);

int fun10() {

	cout << func(10, 20, 30) << endl;
	cout << func(10) << endl;

	system("pause");
	return 0;
}

/*
int func2(int a, int b = 20) {//程序出现了二义性，会报错
	return a + b ;
}
*/
