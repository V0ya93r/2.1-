//成员属性私有化优点：可以控制读写权限
#include<iostream>
using namespace std;

class Person4
{
private:
	string name = "Ellie";	//只读
	int age = 23;			//只读
	int score;				//读写

//用方法达到“只读”和“读写”的目的
public:
	string getname()
	{
		return name;
	}
	int getage()
	{
		return age;
	}
	void setscore(int sscore)
	{
		score = sscore;
	}
	int getscore()
	{
		return score;
	}

};

int main4()
{
	Person4 p;
	p.setscore(100);
	cout << p.getname() << endl << p.getage()  << endl << p.getscore() << endl;
	return 0;
}