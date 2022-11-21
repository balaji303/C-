#include <iostream>
using namespace std;

/* Struct members are Public by default */
/* Dont use the member methods when needed */
/* Comes with passive members and all are public members by default */
struct structPerson
{
    string name;
    string getname();
};

string structPerson::getname(void)
{
    return name;
}

/* Class members are Private by default */
/* Class is mainly used with active members with private access */
/* Implement getters and setters */
/* Implement member methods as needed */
class classPerson
{
    string name;
    string getname();
};

string classPerson::getname(void)
{
    return name;
}

int main(void)
{
    /* Struct */
    structPerson Frank;
    Frank.name = "Frank";
    cout<<"Struct get name:"<<Frank.getname()<<endl;

    /* Class */
    classPerson Wild;
    // Wild.name = "Wild"; // Error becoz name is private
    // cout<<"class get name"<<Wild.getname()<<endl; // Error becoz getname is private
    return 0;
}