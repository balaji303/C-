#include <iostream>
#include <stdint.h>
using namespace std;

class BaseClass
{
public:
    uint8_t baseSample;

    //Constructor
    BaseClass(uint8_t argSample);
};

BaseClass::BaseClass(uint8_t argSample=0):baseSample{argSample}
{
    cout<<"Print from BaseClass constructor\n";
}

class DerivedClass:public BaseClass
{
public:
    uint8_t derivedSample;

    //Constructor
    DerivedClass(uint16_t argSample);
};

DerivedClass::DerivedClass(uint16_t argSample=4):derivedSample{argSample}
{
    cout<<"print from Derived Class constructor\n";
}

int main(void)
{
    cout<<"Calling Base class\n";
    BaseClass aa{};

    cout<<"Calling Base class\n";
    DerivedClass bb{};

    return 0;
}