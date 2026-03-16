#include <bits/stdc++.h>
using namespace std;

//占位参数
//返回值类型 函数名（数据类型）{} 
//占位参数可以用默认参数 但是占位就不能传入参数了 
void func(int a , int){
	cout << "this is func" << endl;
} 

int main(){
	
	func(10,10);
	return 0;
} 
