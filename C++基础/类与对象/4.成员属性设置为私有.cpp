#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

//成员属性设置为私有 
//优点
//1、将所有成员属性设置为私有，可以自己控制读写权限
//2、对于写权限，我们可以检测数据的有效性 

//人类
class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	} 
	//获取姓名
	string getName()
	{
		return m_Name;
	}
	//设置年龄
	void setAge(int Age)
	{	
		if(Age >= 0 && Age <= 150)
		{
			m_Age = Age;
		}
		else
		{
			cout << "年龄" << Age <<  "输入有误，赋值失败" << endl;
			return;
		}
	} 
	//获取年龄
	int getAge()
	{
		return m_Age;	
	} 
	//设置偶像
	string setIdol(string Idol)
	{
		m_Idol = Idol;
	} 
	
private: 
	string m_Name; //姓名 可读可写 
	
	int m_Age = 18; //年龄 可读 可写（年龄必须在0 - 150之间） 
	
	string m_Idol; //偶像 只写	
};


int main(){
	
	Person p;
	//姓名设置
	p.setName("张三");
	//获取姓名 
	cout << "姓名: " << p.getName() << endl;
	//年龄设置
	p.setAge(17); 
	//获取年龄
	cout << "年龄："  << p.getAge() << endl; 
	//偶像设置
	p.setIdol("小明");
	 
	
	return 0;
} 
