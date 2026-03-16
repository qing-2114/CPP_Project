#include <iostream>
using namespace std;
//重载左移运算符配合友元可以实现输出自定义数据类型
class Person
{
	//利用成员函数重载<<运算符 p.operator<<(cout); 简化形式是 p << cout;
	//通常不会利用成员函数重载<<运算符 因为cout在左边 不是很符合习惯
	// void operator<<()
	// {

	// }
	public:
		Person(int a, int b)
		{
			m_A = a;
			m_B = b;
		}
		friend ostream& operator<<(ostream &cout,Person &p); // 友元函数 让全局函数可以访问类的私有成员
	private:
		int m_A;
		int m_B;
};

//只能利用全局函数重载<<运算符
ostream& operator<<(ostream &cout,Person &p) // 本质 oprator<<(cout, p); 简化形式 cout << p; 全局只有一个用引用传参会优于指针
{
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
	return cout; //方便链式调用	
}

void test01()
{
	Person p(10,15);

	cout << p << "Hello World" << endl;
}

int main(){
	
	test01();

	system("pause");
	return 0; 
} 
