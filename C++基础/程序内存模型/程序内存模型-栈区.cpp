#include <bits/stdc++.h>
using namespace std;

//栈区
//由编译器自动分配释放
//存放函数的参数值和局部变量
//注意：不要返回局部变量的地址

int* func(int b) //形参数据也会放在栈区 
{
	b = 100;
	int  a = 10;//局部变量 存放在栈区 栈区的数据在函数执行完后自动释放 
	return &a;  //返回局部变量的地址	 
} 
 

int main(){
	
	//接受func函数的返回值 
	int * p = func(1);
	
	
	cout << *p << endl;//第一次可以打印出正确的数字是因为编译器做了保留 
	cout << *p << endl;//第二次这个数据就不再保留了 
	
	return 0;
} 
