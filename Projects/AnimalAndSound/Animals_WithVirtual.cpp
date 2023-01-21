/**
 * @file Animals.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Create a base class called Animals and derived few specific animals 
 *          and access them using pointer and reference with virtual
 * @version 1
 * @date 19-01-2023
 * 
 * Copyright (c) 2023 @balaji303
 * 
 */

#include <iostream>
#include <stdint.h>
#include <string.h>
using namespace std;

class AnimalClass
{
protected:
    string animalName;
public:
    AnimalClass(string name);
    string GetName(void);
    virtual string AnimalSound(void); // ! Here is the virtual keyword
};

AnimalClass::AnimalClass(string name):animalName{name}
{
    cout<<"AnimalClass ";
}

string AnimalClass::GetName(void)
{
    return animalName;
}

string AnimalClass::AnimalSound(void)
{
    return "!@#$";
}

class Cow:public AnimalClass
{
public:
    Cow(string name);
    string AnimalSound(void);
};

Cow::Cow(string name):AnimalClass{name}
{
    cout<<"Cow Class ";
}

string Cow::AnimalSound(void)
{
    return "Mooo ";
}

class Cockerel:public AnimalClass
{
private:
    /* data */
public:
    Cockerel(string name);
    string AnimalSound(void);
};

Cockerel::Cockerel(string name):AnimalClass{name}
{
    cout<<"Cockerel class";
}

string Cockerel::AnimalSound(void)
{
    return "cock a doodle do ";
}


int main(void)
{
    Cockerel cockerel{"dora"};
    cout<<"This is a "<<cockerel.GetName()<<" and its sound "<<cockerel.AnimalSound()<<endl;
    Cow cow{"karikalan"};
    cout<<"This is a "<<cow.GetName()<<" and its sound "<<cow.AnimalSound()<<endl;
    AnimalClass *ptrAnimal{&cow};
    // * Since ptrAnimal is a pointer to Base Class it points to the BaseClass's Animal sound function
    cout<<"This is a "<<ptrAnimal->GetName()<<" and its sound "<<ptrAnimal->AnimalSound()<<endl;
    return 0;
}

/*     
If there is no virtual keyword, then the output is

AnimalClass Cockerel classThis is a dora and its sound cock a doodle do 
AnimalClass Cow Class This is a karikalan and its sound Mooo 
This is a karikalan and its sound !@#$



If there is Virtual keyword, then the output is 

AnimalClass Cockerel classThis is a dora and its sound cock a doodle do 
AnimalClass Cow Class This is a karikalan and its sound Mooo 
This is a karikalan and its sound Mooo 



*/