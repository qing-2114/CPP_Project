#include <iostream>
using namespace std;

//递增运算符重载 前置递增返回引用 后置递增返回值
//自定义整形
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);//友元函数重载左移运算符
	public:
		MyInteger()
		{
			m_Num = 0;
		}
		//重载++运算符 前置 返回引用是为了实现链式编程 一直对同一个对象进行操作 
		//如果返回值的话 就会返回一个临时对象 不是同一个对象了
		MyInteger& operator++()
		{
			//先进行++操作 
			this->m_Num++;
			//再返回对象本身
			return *this;
		}
		//重载++运算符 后置 返回不能是引用 因为返回的是temp临时对象
		//void opeator++(int) int代表的是占位参数 可以用于区分前置和后置递增
		MyInteger operator++(int)
		{
			//先记录当时结果
			MyInteger temp = *this; 
			//再进行++操作
			this->m_Num++;
			//最后将记录结果返回
			return temp;
		}

	private:
		int m_Num;
};

void test01()
{
	MyInteger myint;
	
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02()
{
	MyInteger myint;

	cout << myint++ << endl; //先输出0 再进行++操作
	cout << myint << endl; //输出1
}

//重载左移运算符 实现链式编程
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}



int main(){
	
	//test01();

	// int a = 0;
	// cout << ++(++a) << endl;
	// cout << a << endl;

	test02();

	system("pause");
	return 0; 
} 
