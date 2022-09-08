#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:
    void bark()
    {
        cout<<"barking"<<endl;
    }
};

class Human
{
    public:
    void speak()
    {
        cout<<"speaking"<<endl;
    }
};

class Alien:public Animal,public Human
{
    
};

int main()
{
    Alien obj;
    obj.speak();
    obj.bark();
    
    return 0;
}