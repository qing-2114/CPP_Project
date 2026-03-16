#include <bits/stdc++.h>
using namespace std;

int main(){
	int a = 10;
	//引用必须初始化
	//int &b; 不可取 
	int &b = a;
	// 引用在初始化后 不可以改变
	int c = 20; 
	b = c;//赋值操作而不是更改引用
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	cout << "c:" << c << endl; 
	return 0;
} 
