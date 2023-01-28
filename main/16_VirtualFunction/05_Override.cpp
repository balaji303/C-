#include <iostream>
#include <stdint.h>
using namespace std;

class BaseClass
{
public:
    virtual BaseClass* GetThis(void);   //! Virtual is here
    void PrintThis(void);
};

/**
 * @brief Returs this pointer and prints
 * 
 * @return BaseClass* 
 */
BaseClass* BaseClass::GetThis(void)
{
    cout<<"GetThis() from BaseClass\n";
    return this;
}

void BaseClass::PrintThis(void)
{
    cout<<"Hi from BaseClass\n";
}

class DerivedClass: public BaseClass
{
public:
    DerivedClass* GetThis (void) override; //! Override is here
    void PrintThis(void);
};

DerivedClass* DerivedClass::GetThis (void)
{
    cout<<"GetThis() from DerivedClass\n";
    return this;
}

void DerivedClass::PrintThis(void)
{
    cout<<"Hi from DerivedClass\n";
}

int main(void)
{
    // * Override is not required, but using is recommanded
    DerivedClass der{};
    BaseClass* base{&der};
    der.GetThis()->PrintThis();
    base->GetThis()->PrintThis();
    return 0;
};