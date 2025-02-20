#pragma once
class Point
{
private:
	int x;//µãµÄ×ø±ê
	int y;
public:
	void getx(int gx)
	{
		x = gx;
	}
	void gety(int gy)
	{
		y = gy;
	}
	int showx()
	{
		return x;
	}
	int showy()
	{
		return y;
	}
};