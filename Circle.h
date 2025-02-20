#pragma once
class Circle
{
private:
	int x;//Ô²ÐÄ×ø±ê
	int y;
	int r;
public:
	void getx(int gx)
	{
		x = gx;
	}
	void gety(int gy)
	{
		y = gy;
	}
	void getr(int gr)
	{
		r = gr;
	}
	int showx()
	{
		return x;
	}
	int showy()
	{
		return y;
	}
	int showr()
	{
		return r;
	}
};