#include <iostream>
// #include <stdint.h>
#include <string.h>
using namespace std;

class BaseClass
{
public:
    BaseClass(void);
    virtual string GetName(void) const; // ! Virtual keyword is here
};

BaseClass::BaseClass(void)
{
    cout<<"BaseClass"<<endl;
}

string BaseClass::GetName(void) const
{
    return "Baseclass";
}

class DerivedClass:public BaseClass
{
public:
    DerivedClass(void);
    string GetName(void)const;
};

DerivedClass::DerivedClass(void)
{
    cout<<"DerivedClass"<<endl;
}

string DerivedClass::GetName(void) const
{
    return "DerivedClass";
}

int main(void)
{
    DerivedClass der{};
    BaseClass& rBase{der};
    // If there is virtual keyword in BaseClass::GetName it says DerivedClass
    // else it says BaseClass
    cout<<"The Get name says "<<rBase.GetName();
    //If virtual keyword is present, it tells the program to look and see if there is any other derived versions
    // of the function is available
    return 0;
}