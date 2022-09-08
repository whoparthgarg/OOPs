#include<bits/stdc++.h>
using namespace std;

class A
{
	public:
	void speak()
	{
		cout<<"base"<<endl;
	}	
};

class B:public A
{
	public:
	void speak()
	{
		cout<<"derived"<<endl;
	}
};

int main()
{
	B obj;
	obj.speak();
	
	return 0;
}