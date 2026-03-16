#include <iostream>
using namespace std;
//对象的初始化和清理
class Person
{
	public:
		//1、构造函数
		//没有返回值 不用写void
		//函数名与类的名称相同
		//构造函数可以有参数 可以发生重载
		//在创建对象的时候 构造函数会自动调用 只1次
		Person()
		{
			cout << "Person 构造函数调用" << endl;
		}
		
		//2、析构函数
		//没有返回值 不写void
		//函数名与类名相同 要在前面加一个 ~ 
		//析构函数不可以有参数 不可以发生重载
		//对象在销毁前会自动调用析构函数 只1次 
		~Person()
		{
			cout << "Person 析构函数调用" << endl;	
		} 
};

//构造和析构都是必须有的实现 如果我们自己不提供 编译器会提供一个空实现的构造和析构 
void test01()
{
	Person p;//在栈上的数据 test01执行完后就会释放这个对象 
}

int main(){
	
	test01();
	//Person p; 
	
	system("pause");
	return 0; 
} 
