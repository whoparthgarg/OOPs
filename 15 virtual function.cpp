#include<bits/stdc++.h>
using namespace std;

class base
{
	public:
	virtual void speak()
	{
		cout<<"speaking base"<<endl;
	}	
	
	void say()
	{
		cout<<"saying base"<<endl;
	}
};

class derived:public base
{
	public:
	void speak()
	{
		cout<<"speak derived"<<endl;
	}
	
	void say()
	{
		cout<<"saying derived"<<endl;
	}
};

int main()
{
	base *obj=new derived;
	(*obj).speak();
	return 0;
}