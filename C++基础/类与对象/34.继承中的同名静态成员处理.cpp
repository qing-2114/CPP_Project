#include <iostream>
using namespace std;

//继承中同名静态成员处理
class Base
{
	public:

		static int m_A;

		static void func()
		{
			cout << "Base - static void func()调用" << endl;
		}

		static void func(int a)
		{
			cout << "Base - static void func(int a)调用" << a << endl;
		}

};
int Base::m_A = 100;

class Son: public Base
{
	public:
	
		static int m_A;

		static void func()
		{
			cout << "Son - static void func()调用" << endl;
		}

};
int Son::m_A = 200;

//同名静态成员属性
void test01()
{
	//1、通过对象访问
	cout << "通过对象的访问" << endl;
	Son s;
	cout << "Son中m_A = " << s.m_A << endl;
	cout << "Base中m_A = " << s.Base::m_A << endl;
	//2、通过类名访问
	cout << "通过类名的访问" << endl;
	cout << "Son中m_A = " << Son::m_A << endl;
	//第一个::代表通过类名访问 第二个::代表访问父类中的同名成员
	cout << "Base中m_A = " << Son::Base::m_A << endl;

}

//同名静态成员函数
void test02()
{
	//1、通过对象访问
	cout << "通过对象的访问" << endl;
	Son s;
	s.func(); //直接调用调用的是子类中的同名成员
	s.Base::func();//调用父类的同名函数要加入作用域

	//2、通过类名访问
	cout << "通过类名的访问" << endl;
	Son::func(); //直接调用调用的是子类中的同名成员
	Son::Base::func();//调用父类的同名函数要加入作用域
	// Son::func(100);//要加作用域
	//子类出现和父类同名静态成员函数也会隐藏掉父类中所有的同名成员函数 
	//如果想访问父类中被隐藏的同名成员函数 需要加作用域
	Son::Base::func(100);
}


int main(){
	
	// test01();
	test02();

	system("pause");
	return 0; 
} 
