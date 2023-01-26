#include <iostream>
#include <stdint.h>
using namespace std;

class BaseClass
{
public:
    virtual string GetValue1(uint8_t value);
    virtual string GetValue2(uint16_t value);
};

string BaseClass::GetValue1(uint8_t value)
{
    return "A";
}

string BaseClass::GetValue2(uint16_t value)
{
    return "A";
}

class DerivedClass:public BaseClass
{
public:
    string GetValue1(uint16_t value);
    string GetValue2(uint8_t value);
};

string DerivedClass::GetValue1(uint16_t value)
{
    return "B";
}

string DerivedClass::GetValue2(uint8_t value)
{
    return "B";
}

int main(void)
{
    DerivedClass d{};
    BaseClass& ptrBase{d};
    // ? Here even after virtual function it points to BaseClass::GetValue only
    // ? So using override keyword
    cout<<ptrBase.GetValue1(5);
    return 0;
}