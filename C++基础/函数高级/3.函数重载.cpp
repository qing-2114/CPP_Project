#include <bits/stdc++.h>
using namespace std;

//函数重载
//可以让函数名相同 提高复用性
//函数重载的满足条件
//1、必须在同一个作用域下
//2、函数同名
//3、函数的参数类型不同 或 个数不同 或顺序不同 
void func(){
	cout << "func的调用" << endl;
} 

void func(int a){
	cout << "func的调用!" << endl;
} 

void func(double a){
	cout << "func的调用!!" << endl;
} 

void func(int a , double b){
	cout << "func的调用!!!" << endl;
}

void func(double a , int b){
	cout << "func的调用!!!!" << endl;
}
//注意事项
//函数的返回值不可以作为函数重载的条件 
int main(){
	
	//func();
	//func(10);
	return 0;
} 
