#include "includes.h"


string Movie::getname(void)
{
    return name;
}

void Movie::setname(string tempName)
{
    name = tempName;
}

int Movie::get_numPlayers(void)
{
    return numPlayers;
}

Movie::Movie():Movie{"None",0,0}
{
}

Movie::Movie(string name):Movie{name,0,0}
{
}

Movie::Movie(string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}
{
    numPlayers++;
}

Movie::~Movie()
{
    numPlayers--;
}