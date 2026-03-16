#include <bits/stdc++.h>
using namespace std;

int main(){
	
	//引用基本语法
	//数据类型 &别名 = 原名
	int a = 10;
	//创建引用 
	int &b = a;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	//用途就是给一个变量取别名
	 
	 
	return 0;
} 
