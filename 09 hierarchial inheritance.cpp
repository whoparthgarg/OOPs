#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    void funa()
    {
        cout<<"fun of a"<<endl;
    }
};

class B:public A
{
    
};

class C:public A
{
    
};

int main()
{
    B obj1;
    obj1.funa();
    
    C obj2;
    obj2.funa();
    
    return 0;
}