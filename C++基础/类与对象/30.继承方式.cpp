#include <iostream>
using namespace std;

//继承方式
//公共继承
class Base1
{
	public:
		int m_A;
	protected:
		int m_B;
	private:
		int m_C;
};

class Son1: public Base1
{
	public:
		void func()
		{
			m_A = 10; //父类中的公共权限成员 到子类中依然是公共权限
			m_B = 10; //父类中的保护权限成员 到子类中依然是保护权限
			// m_C = 10; //无法访问
		}
};

void test01()
{
	Son1 s1;
	s1.m_A = 100; //公共权限可以访问
	// s1.m_B = 100; //保护权限无法访问
}

//保护继承
class Base2
{
	public:
		int m_A;
	protected:
		int m_B;
	private:
		int m_C;
};

class Son2: protected Base2
{
	public:
		void func()
		{
			m_A = 100; //父类中的公共成员 到子类中变为保护权限
			m_B = 100; //父类中的保护成员 到子类中依然是保护权限
			// m_C = 100; //子类无法访问父类的私有属性
		}
};

void test02()
{
	Son2 s2;
	// s2.m_A = 100; //父类中的公共成员 到子类中变为保护权限 类外无法访问
	// s2.m_B = 100; //父类中的保护成员 到子类中依然是保护权限 类外无法访问
}

//私有继承
class Base3
{
	public:
		int m_A;
	protected:
		int m_B;
	private:
		int m_C;
};

class Son3: private Base3
{
	public:
		void func()
		{
			m_A = 100; //父类中的公共成员 到子类中变为私有权限
			m_B = 100; //父类中的保护成员 到子类中变为私有权限
			// m_C = 100; //父类中的私有成员 到子类中无法访问
		}
};

class GrandSon3: public Son3
{
	public:
		void func()
		{
			// m_A = 1000;  //到了Son3中 m_A变为私有 即使是儿子 也访问不到
			// m_B = 1000;
			// m_C = 1000;
		}
};

void test03()
{
	Son3 s3;
	// s3.m_A = 100; //父类中的公共成员 到子类中变为私有权限 类外无法访问
	// s3.m_B = 100; //父类中的保护成员 到子类中变为私有权限 类外无法访问
}


int main(){
	
	// test01();
	// test02();
	test03();


	system("pause");
	return 0; 
} 
