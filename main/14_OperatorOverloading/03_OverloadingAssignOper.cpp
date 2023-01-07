#include <iostream>
using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_string(string funname)
    {
        name = funname;
    }
    std::string get_name(void){ 
        return name;
    }
    int get_health(void){
         return health; 
    }
    int get_xp(void){
        return xp;
    }
    //Constructor
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    //Destructor
    ~Player(){
        cout<<"Destructor called for "<<name<<endl;
    }
};

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}{ //Deligation
        cout<<"Three-args constructor for "<<name<<endl;
    }

void display_player(Player p);

int main(void)
{
    Player one{"ONE",40,3};
    Player two;
    display_player(two);    // None, 0, 0 
    two = one;
    display_player(two);    // ONE, 40, 3
    two.set_string("TWO");
    display_player(two);    // TWO, 40, 3
    return 0;
}

void display_player(Player p){
    cout<<"Name: "<< p.get_name() <<endl;
    cout<<"Health: "<<p.get_health()<<endl;
    cout<<"XP: "<<p.get_xp()<<endl;
}