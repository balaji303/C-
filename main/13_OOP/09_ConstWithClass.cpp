#include <iostream>
using namespace std;

/* Class Fiction Movie */
class Movie
{
private:
    int xp;
    int health;
    string name;

public:
    string getname() const;//Important line of this code
    void setname(string);

    //Constructor
    Movie();
    Movie(string name);
    Movie(string name_val,int health_val,int xp_val);
};

string Movie::getname(void) const//Important line of this code
{
    return name;
}

void Movie::setname(string tempName)
{
    name = tempName;
}

Movie::Movie():Movie{"None",0,0}
{
}

Movie::Movie(string name):Movie{name,0,0}
{
}

Movie::Movie(string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}
{
}

void display_name(const Movie &p);
int main(void)
{
    const Movie villian{"villan",10,33};
    Movie hero{"hero",100,2};
    cout<<"Get Name"<<hero.getname()<<endl;
    cout<<"Get Name"<<villian.getname()<<endl;//error when no const in getname
    display_name(hero);//Although hero is not const, the function void display_name(const Movie &p) thoughs error
    display_name(villian);//e
    return 0;
}
void display_name(const Movie &p)
{
    cout<<"Display Name:"<<p.getname()<<endl;//error when no const in getname
}