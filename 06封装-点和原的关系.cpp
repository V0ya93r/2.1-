//设计一个圆类，一个点类，计算点和圆的关系
#include<iostream>
#include"Point.h"
#include"Circle.h"
using namespace std;

//class Circle
//{
//private:
//	int x;//圆心坐标
//	int y;
//	int r;
//public:
//	void getx(int gx)
//	{
//		x = gx;
//	}
//	void gety(int gy)
//	{
//		y = gy;
//	}
//	void getr(int gr)
//	{
//		r = gr;
//	}
//	int showx()
//	{
//		return x;
//	}
//	int showy()
//	{
//		return y;
//	}
//	int showr()
//	{
//		return r;
//	}
//};

//class Point
//{
//private:
//	int x;//点的坐标
//	int y;
//public:
//	void getx(int gx)
//	{
//		x = gx;
//	}
//	void gety(int gy)
//	{
//		y = gy;
//	}
//	int showx()
//	{
//		return x;
//	}
//	int showy()
//	{
//		return y;
//	}
//};

void guanxi(Circle c, Point p)
{
	double dis = sqrt((p.showx() - c.showx()) * (p.showx() - c.showx()) + (p.showy() - c.showy()) * (p.showy() - c.showy()));
	if (dis < c.showr()) cout << "点在圆内" << endl;
	else if (dis == c.showr()) cout << "点在圆上" << endl;
	else cout << "点在圆外" << endl;
}

int main()
{
	Circle c6;
	Point p6;
	c6.getx(10);
	c6.gety(10);
	c6.getr(5);
	p6.getx(20);
	p6.gety(20);
	cout << "圆心：" << c6.showx() << " " << c6.showy() << endl;
	cout << "半径：" << c6.showr() << endl;
	cout << "点：" << p6.showx() << " " << p6.showy() << endl;
	guanxi(c6, p6);
	return 0;
}