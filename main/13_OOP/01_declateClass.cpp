#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Player{
public:
    //Attribute
    string name;
    int healthBar;
    int powerBar;
    //Method
    void chat(string talkback);
    bool isDead;
};
int main(void){
    Player one;
    Player two;
    Player frank;
    Player bob;
    Player online[] = {frank,bob};
    Player *enemy = nullptr;
    enemy = new Player;
    vector <Player> player_vec {frank};
    player_vec.push_back(bob);

    one.name = "Balaji";
    one.healthBar = 1;
    two.name = "Velayutham";
    two.healthBar = 100;
    cout<<one.healthBar<<endl;
    cout<<two.healthBar<<endl;
    delete enemy;
    return 0;
}