#include<bits/stdc++.h>
using namespace std;

class Animal
{
    private:
    int height;
    int weight;
    
    public:
    void speak()
    {
        cout<<"speaking"<<endl;
    }
};

class Dog:public Animal
{
    
};

int main()
{
    Dog obj;
    obj.speak();
    
    return 0;
}