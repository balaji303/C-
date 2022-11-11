#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val){
        name = name_val;
    }
    //Overloaded Constructor
    Player(){
        cout<<"Constructor with NO arguments called"<<endl;
    }
    Player(std::string name){
        cout<<"Constructor with STRING NAME arguments called"<<endl;
    }
    Player(std::string name, int health, int xp){
        cout<<"Constructor with 3 arguments called"<<endl;
    }
    //Destructor
    ~Player(){
        cout<<"Destructor called for "<<name<<endl;
    }
};
int main(void){
    {
        Player one;
        one.set_name("PlayerONE");
    }

    {
        Player frank;
        frank.set_name("FrankPlayer");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villan("Willan",100,34);
        villan.set_name("villan");
    }

    Player *enemy = new Player;
    enemy->set_name("Enemy");
    delete enemy;
    return 0;
}