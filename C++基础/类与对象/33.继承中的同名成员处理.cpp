#include <iostream>
using namespace std;

//继承中同名成员处理
class Base
{
	public:
		Base()
		{
			m_A = 100;
		}

		void func()
		{
			cout << "Base - func调用" << endl;
		}

		void func(int a)
		{
			cout << "Base - func调用(int a)" << a << endl;
		}

		int m_A;
};

class Son: public Base
{
	public:
		Son()
		{
			m_A = 200;
		}

		void func()
		{
			cout << "Son - func调用" << endl;
		}

		int m_A;
};

void test01()
{
	Son s;
	cout << "Son的m_A = " << s.m_A << endl;
	//如果通过子类对象访问到父类中同名成员需要加入作用域
	cout << "Base的m_A = " << s.Base::m_A << endl;
}

//同名成员函数的处理方式
void test02()
{
	Son s;
	s.func(); //直接调用调用的是子类中的同名成员
	s.Base::func();//调用父类的同名函数要加入作用域

	//如果子类中出现与父类同名的成员函数 子类的同名成员会隐藏掉父类中所有的同名成员函数 
	//想要访问到父类中被隐藏的同名成员函数 需要加作用域
	// s.func(100);
	s.Base::func(100);
}

int main(){
	
	// test01();
	test02();

	system("pause");
	return 0; 
} 
