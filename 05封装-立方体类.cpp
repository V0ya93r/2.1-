#include<iostream>
using namespace std;

class Cube
{
private://只读
	int length;
	int width;
	int height;

public://私有化
	void setlength(int slength)
	{
		length = slength;
	}
	void setwidth(int swidth)
	{
		width = swidth;
	}
	void setheight(int sheight)
	{
		height = sheight;
	}
	int area()
	{
		return (length * width + length * height + width * height) * 2;
	}
	int tiji()
	{
		return length * width * height;
	}
	//类内行为判断是否相等
	bool isSameByClass(Cube c)
	{
		if (area() == c.area() && tiji() == c.tiji())
			return 1;
		else return 0;
	}
};
//全局函数判断
static bool issame(Cube c1, Cube c2)
{
	if (c1.area() == c2.area() && c1.tiji() == c2.tiji())
		return 1;
	else return 0;
}

int main5()
{
	Cube c1;
	c1.setlength(3);
	c1.setwidth(4);
	c1.setheight(5);

	Cube c2;
	c2.setlength(5);
	c2.setwidth(4);
	c2.setheight(3);

	cout << c1.area() << " " << c1.tiji() << endl;

	if (issame(c1, c2)) cout << "c1立方体和c2立方体相等" << endl;
	else  cout << "c1立方体和c2立方体不相等" << endl;

	if (c1.isSameByClass(c2)) cout << "c1立方体和c2立方体相等" << endl;
	else  cout << "c1立方体和c2立方体不相等" << endl;
	return 0;
}