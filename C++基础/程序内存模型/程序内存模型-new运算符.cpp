#include <bits/stdc++.h>
using namespace std;

//c++中利用new操作符在堆区开辟数据
//堆区开辟的数据由程序员手动开辟 手动释放 释放利用操作符delete
 
//1.new的基本语法
int * func()
{
	//在堆区创建一个整型的数据
	//new返回的是一个该数据类型的指针 
	int *p = new int(10);
	return p;
	 
}

void test01()
{
	int *p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据程序员管理开辟与释放
	//如果想释放堆区的数据 利用关键字 delete
	delete p;
	//内存已经被释放 再次访问就是非法操作 
	cout << *p << endl; 
	
}
	
//2.在堆区利用new来开辟数组 
void test02()
{
	//创建10整型数据的数组
	//返回的是数组的首地址 
	int *arr = new int[10]; //[]则10表示数组有10个元素 
	
	for(int i = 0; i < 10; ++i){
		arr[i] = i+100; //给10个元素赋值 100~109 
	}
	
	for(int i = 0; i < 10; ++i){
		cout << arr[i] << endl;
	} 
	
	//释放堆区的数组
	//释放数组的时候要加[]才可以 
	delete[] arr; 
}


int main(){
	
	test01();
	test02();
	
	return 0;
} 
