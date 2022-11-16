#include "includes.h"

void display_active_players(void);
int main(void)
{
    display_active_players();// 0
    Movie hero{"Hero"};
    display_active_players();// 1
    {
        Movie villan{"villan"};
        display_active_players();// 2
    }
    display_active_players();// 1

    Movie *enemy = new Movie{"enemy",100,2};
    display_active_players();// 2
    delete enemy;
    display_active_players();// 1
    return 0;
}

void display_active_players(void)
{
    /* As there is no Object we can call using the scope operator */
    cout<<"Active Players: "<<Movie::get_numPlayers()<<endl;
}