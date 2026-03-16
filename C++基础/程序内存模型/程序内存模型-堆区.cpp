#include <bits/stdc++.h>
using namespace std;

//堆区
//由程序员分配释放 若程序员不释放 程序结束时由操作系统回收
//c++中主要利用new在堆区开辟内存 


int * func()
{
	//利用new关键字可以将数据开辟到堆区 
	//指针本质也是局部变量 放在栈上 指针保存的数据放在了堆区 
	int *p = new int(10); //int为开辟数据的类型 10为初始值 
	return p;
}

int main(){
	
	//在堆区开辟数据
	int *p = func();
	cout << *p << endl;
	cout << *p << endl; 
	
	return 0;
} 
