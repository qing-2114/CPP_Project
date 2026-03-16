#include <bits/stdc++.h>
using namespace std;

//全局区 
//全局变量和静态变量 还包含了常量区 字符串常量和其他常量
//该区域的数据在程序结束后由操作系统释放

//全局变量 
int g_a = 10;
int g_b = 10; 

//const修饰的全局变量,全局常量 
const int c_g_a = 10;
const int c_g_b = 10;

int main(){
	
	//创建一个普通的局部变量
	//写在函数体内的函数都是局部变量 
	int a = 10;
	int b = 10;
	
	//int无法表示出地址，超出了int的范围 所以要用long long 
	cout << "局部变量a的地址：" << (long long)&a << endl;
	cout << "局部变量b的地址：" << (long long)&b << endl;
	 
	cout << "全局变量g_a的地址：" << (long long)&g_a << endl;
	cout << "全局变量g_b的地址：" << (long long)&g_b << endl;
	
	//静态变量
	//在普通变量的前面加上static就属于静态变量 
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址：" << (long long)&s_a << endl; 
	cout << "静态变量s_b的地址：" << (long long)&s_b << endl;
	
	//常量
	//字符串常量
	cout << "字符串常量的地址为：" << (long long)&"Hello World!" << endl;
	
	//const修饰只读变量 
	//const修饰的全局变量 const修饰的局部变量 
	cout << "全局常量c_g_a的地址为：" << (long long)&c_g_a << endl; 
	cout << "全局常量c_g_b的地址为：" << (long long)&c_g_b << endl; 
	
	//const修饰的局部常量是局部变量 
	const int c_l_a = 10; // c - const g - global l - local
	const int c_l_b = 10;
	cout << "局部常量c_l_a的地址为：" << (long long)&c_l_a << endl; 
	cout << "局部常量c_l_b的地址为：" << (long long)&c_l_b << endl;
	
	return 0;
} 


//不在全局区中的
//局部变量 const修饰的局部变量（局部常量） 

//在全局区中的
//全局变量 静态变量（static关键字）  const修饰的全局变量（全局常量）  字符串常量  

