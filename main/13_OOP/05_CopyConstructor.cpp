#include <iostream>
#include <string>
using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name(void){ 
        return name;
    }
    int get_health(void){
         return health; 
    }
    int get_xp(void){
        return xp;
    }
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    //Copy constructor
    Player(const Player &source);
    //Destructor
    ~Player(){
        cout<<"Destructor called for "<<name<<endl;
    }
};

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}{ //Deligation
        cout<<"Three-args constructor for "<<name<<endl;
    }

Player::Player(const Player &source)
    :name{source.name}, health{source.health}, xp{source.xp}{ //Deligation
        cout<<"Copy constructor called for "<<source.name<<endl;
    }

void display_player(Player p);

int main(void){
    Player empty;
    Player frank{"Frank"};
    display_player(frank);
    Player hero{"Hero",100};
    Player villan{"Villan",100,12};

    return 0;
}

void display_player(Player p){
    cout<<"Name: "<< p.get_name() <<endl;
    cout<<"Health: "<<p.get_health()<<endl;
    cout<<"XP: "<<p.get_xp()<<endl;
}