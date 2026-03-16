#include <bits/stdc++.h>
using namespace std;

//圆周率 
const double PI = 3.14; 

//设计一个圆类 求圆的周长
//圆求周长公式 2*PI*半径

//class 代表设计一个类 紧跟着类名称 
class Circle
{
	//访问权限
	//公共权限 
public: 
	
	//属性
	//半径 
	double m_r;
	
	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2*PI*m_r;	
	} 
};
 

int main(){
	
	//通过圆类创建一个具体的圆（对象）
	//实例化 (通过一个类 创建一个对象的过程) 
	Circle c1;
	//给圆的对象进行赋值
	c1.m_r = 10;
	 
	cout << "圆的周长为：" << c1.calculateZC() << endl; 
	
	return 0;
} 
