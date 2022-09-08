#include<bits/stdc++.h>
using namespace std;

class Hero
{
    //properties
    private:
    int health;
    char level;
    
    //behaviour
    public:
    
    Hero()
    {
        cout<<"constructor"<<endl;
    }
    
    int getHealth()
    {
        return health;
    }
    
    char getLevel()
    {
        return level;
    }
    
    void setHealth(int health)
    {
        this->health=health;
    }
    
    void setLevel(char level)
    {
        this->level=level;
    }
};

int main()
{
    //statically allocated
    cout<<"constructor not here"<<endl;
    Hero h1;
    cout<<"constructor is called"<<endl;
    
    //dynamically allocated
    Hero *h2=new Hero;
    
    return 0;
}