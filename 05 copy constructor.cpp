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
        cout<<"constructor called";
    }
    
    Hero(int health,char level)
    {
        this->health=health;
        this->level=level;
    }
    
    Hero(Hero &h)
    {
        this->health=h.health;
        this->level=h.level;
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
    Hero h2(h1);
    cout<<h1.getHealth()<<" "<<h2.getHealth()<<endl;

    //dynamically allocated
    Hero *h3=new Hero(20,'B');
    Hero *h4(h3);
    cout<<h3->getHealth()<<" "<<h4->getHealth()<<endl;

    return 0;
}