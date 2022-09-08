#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    void fun()
    {
        cout<<"fun A"<<endl;
    }
};

class B
{
    public:
    void fun()
    {
        cout<<"fun B"<<endl;
    }
};

class C:public A,public B
{
    
};

int main()
{
    C obj;
    obj.A::fun();
    obj.B::fun();
    
    return 0;
}