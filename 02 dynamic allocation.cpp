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
    Hero h1;
    h1.setHealth(20);
    h1.setLevel('B');
    cout<<h1.getHealth()<<endl;
    cout<<h1.getLevel()<<endl;
    
    //dynamically allocated
    Hero *h2=new Hero;
    (*h2).setHealth(30);
    (*h2).setLevel('C');
    cout<<(*h2).getHealth()<<endl;
    cout<<(*h2).getLevel()<<endl;
    
    return 0;
}