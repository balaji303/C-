/* Friend of Function
 
    Friend of a Class is a Function or Class that has access to the Private members of the class
    And the friend function or class is not a member of the class

    Friendship should be granted not taken
        Declared in Function Prototype with the keyword "friend"
    Friendship is not symmentric 
        If A is a Friend of B, then B is NOT a friend of A
    Friendship is not transitive
        If A is a Friend of B and 
           B is a friend of C and
           A is NOT a friend of C
    
*/

#include <iostream>
using namespace std;

class Movie
{
private:
    friend void display_movie(Movie &p); /* Friend Function */
    int xp;
    int health;
    string name;
public:
    string getname();
    void setname(string);

    //Constructor
    Movie();
    Movie(string name_val,int health_val,int xp_val);
    //Destructor
    ~Movie();
};

Movie::Movie(void)
{
}

Movie::~Movie(void)
{
}

Movie::Movie(string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}
{
}

int main(void)
{
    Movie hero{"hero",100,2};
    display_movie(hero);
    return 0;
}

/* Friend Function */
void display_movie(Movie &p)
{
    cout<<"Name  : "<<p.name<<endl;
    cout<<"Health: "<<p.health<<endl;
    cout<<"XP    : "<<p.xp<<endl;
}