#include<iostream>
using namespace std;
#include<string>

//1.new的基本语法
int* func1() {
	//在堆区创建整型的数据
	int* p = new int(10);
	return p;
}

void test01() {
	int* p = func1();
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据由开发者管理
	delete p;
	//cout << *p << endl;//读取访问冲突
}

//2.在堆区利用new开辟数组
void test02() {
	//创建10个整型数组，在堆区
	int* arr = new int[10];//数组10个元素
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}

	//释放数组
	delete[] arr;
}


int fun4() {
	test01();
	test02();
	system("pause");
	return 0;
}