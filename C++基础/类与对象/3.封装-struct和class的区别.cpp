#include <bits/stdc++.h>
using namespace std;


class C1{
	
	int m_A;//默认权限是私有 
};

struct C2{
	
	int m_A;//默认权限是公共 
};

int main(){
	
	//struct 和 class的区别
	//struct默认权限为公共 public
	//class 默认权限为私有 private
	
	C1 c1;
	//c1.m_A = 100;//不能在类外访问  
	
	C2 c2;
	c2.m_A = 100;
	
	return 0;
} 
