#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    void fun1()
    {
        cout<<"fun1"<<endl;
    }
};

class D
{
    public:
    void fun4()
    {
        cout<<"fun4"<<endl;
    }
};

class B:public A
{
    
};

class C:public A,public D
{
    
};

int main()
{
    B obj1;
    obj1.fun1();
    
    C obj2;
    obj2.fun1();
    obj2.fun4();
    
    return 0;
}