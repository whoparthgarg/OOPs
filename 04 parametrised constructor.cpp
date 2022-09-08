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
    
    Hero(int health,char level)
    {
        this->health=health;
        this->level=level;
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
    Hero h1(10,'A');

    //dynamically allocated
    Hero *h2=new Hero(20,'B');

    cout<<h1.getHealth()<<" "<<(*h2).getHealth()<<endl;
    return 0;
}