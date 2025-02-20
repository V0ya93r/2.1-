/*
public		公共权限：类内√ 类外√
protected	保护权限：类内√ 类外× 子类可以继承父类
private		私有权限：类内√ 类外×	子类不能继承父类
*/
#include<iostream>
using namespace std;

class person3
{
public:
	string name;
protected:
	string car;
private:
	string password;
	void fun()
	{
		//类内可以访问
		name = "Ellie";
		car = "Benz";
		password = "123";
	}
};

int main3()
{
	person3 Ellie;
	Ellie.name = "Ellie";
	//Ellie.car = "Benz";//类外不能访问
	cout << Ellie.name << endl;
	return 0;
}