#include <bits/stdc++.h>
using namespace std;

//打印数据函数
void showValue(const int &val)
{
	//val = 1000;
	cout << "val = " << val << endl;  	
} 

int main(){
	//常量引用
	//使用场景：用来修饰形参来防止误操作
	//int a = 10;
	
	//int &ref = a; // 引用必须引用一块合法的内存空间
	//const int &ref = 10; //加上const之后 编译器将代码修改成 int temp = 10; int &ref = temp; 
	//ref = 20; 加入const之后变为只读 不可修改
	 
	int a = 100;
	
	showValue(a);
	
	return 0;
} 
