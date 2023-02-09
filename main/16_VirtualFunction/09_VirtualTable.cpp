#include <iostream>
#include <stdint.h>
using namespace std;

class AnimalReport
{
public:
    AnimalReport(uint8_t numOfLegs);
};

AnimalReport::AnimalReport(uint8_t numOfLegs)
{
    // cout<<"Num Of Legs: "<<numOfLegs<<endl;
    printf("Num of Legs %d\n",numOfLegs);
}

class Cow:virtual public AnimalReport // ! Virtual here
{
public:
    Cow(uint8_t numOfTeeth, uint8_t numOfLegs);
};

Cow::Cow(uint8_t numoFTeeth, uint8_t numOfLegs):AnimalReport(numOfLegs)
{
    // cout<<"Num of Cow Teeth: "<<numoFTeeth<<endl;
    printf("Num of Cow Teeth: %d\n",numoFTeeth);
}

class Dog:virtual public AnimalReport // ! Virtual here
{
public:
    Dog(uint8_t numOfTeeth, uint8_t numOfLegs);
};

Dog::Dog(uint8_t numOfTeeth, uint8_t numOfLegs):AnimalReport(numOfLegs)
{
    // cout<<"Num of Dog Teeth: "<<numOfTeeth<<endl;
    printf("Num of Dog Teeth: %d\n",numOfTeeth);
}

class Vet:public Cow, public Dog
{
public:
    Vet(uint8_t numOfCowTeeth, uint8_t numofDogTeeth, uint8_t numOfLegs);
};

Vet::Vet(uint8_t numOfCowTeeth, uint8_t numofDogTeeth, uint8_t numOfLegs):
            AnimalReport{numOfLegs},
            Cow{numOfCowTeeth,numOfLegs},
            Dog{numofDogTeeth,numOfLegs}
{
    cout<<"Vet is called!!..."<<endl;
}

int main(void)
{
    Vet vetri {40,22,4};
    return 0;
}

/*
output if all Virtual are present
Num of Legs 4
Num of Cow Teeth: 40
Num of Dog Teeth: 22
Vet is called!!...


Cow's virtual is removed:
Num of Legs 4
Num of Legs 4
Num of Cow Teeth: 40
Num of Dog Teeth: 22
Vet is called!!...

If Dog's virtual is removed results in error

*/