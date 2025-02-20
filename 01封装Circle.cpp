#include<iostream>
//类 =（访问权限）+ 属性 + 行为
// 成员 = 属性（成员属性，成员变量） + 行为（成员函数、成员方法）
//实例化
using namespace std;

const double PI = 3.14;

class circle
{
public:
	int radius;
	double perimeter()
	{
		return 2 * PI * radius;
	}
};

int main1()
{
	circle c1;
	c1.radius = 2;
	cout << c1.perimeter() << endl;
	return 0;
}