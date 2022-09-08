#include<bits/stdc++.h>
using namespace std;

class Complex
{
	private:
	int real;
	int img;
	
	public:
	Complex(int real,int img)
	{
		this->real=real;
		this->img=img;
	}	
	
	Complex operator+ (Complex c2)
	{
		Complex res(0,0);
		res.real=this->real+c2.real;
		res.img=this->img+c2.img;
		return res;
	}
	
	void print()
	{
		cout<<real<<"+"<<img<<"i"<<endl;
	}
};

int main()
{
	Complex c1(1,2);
	Complex c2(4,5);
	Complex res(0,0);
	
	res=c1+c2;
	res.print();
	
	return 0;
}