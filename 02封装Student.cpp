#include<iostream>

using namespace std;

class student
{
public:
	string name;
	string id;
	void getname()
	{
		cout << name << endl;
	}
	void getid()
	{
		cout << id << endl;
	}
	void setname(string sname)
	{
		name = sname;
	}
	void setid(string sid)
	{
		id = sid;
	}
};
int main2()
{
	student Ellie;
	Ellie.name = "Ellie";
	Ellie.id = "24032202020";
	Ellie.getname();
	Ellie.getid();

	student Joel;
	Joel.setname("Joel");
	Joel.setid("2000300412");
	Joel.getname();
	Joel.getid();
	return 0;
}