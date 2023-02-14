/**
 * @file 10_DynamicCasting.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Dynamic casting in CPP
 * @version 1
 * @date 11-02-2023
 * 
 * Copyright (c) 2023 @balaji303
 * 
 */

#include <iostream>
#include <stdint.h>
using namespace std;

// BaseClass* BasePtrFun(bool argBoolVal);

class BaseClass
{
protected:
    uint8_t baseValue;
public:
    BaseClass(uint8_t argValue);
};

BaseClass::BaseClass(uint8_t argValue):baseValue{argValue}
{
    cout<<"BaseClass Contructor"<<endl;
}

class DerivedClass:public BaseClass
{
protected:
    uint16_t derivedValue;
public:
    DerivedClass(uint16_t argValue, uint8_t argValueBase);
};

DerivedClass::DerivedClass(uint16_t argValue, uint8_t argValueBase)
            :BaseClass{argValueBase},derivedValue{argValue}
{
    cout<<"DerivedClass Constructor"<<endl;
}

BaseClass* BasePtrFun(bool argBoolVal)
{
    if (argBoolVal == false)
    {
        return new DerivedClass{300, 100};
    }
    else
    {
        return new BaseClass{50};
    }
}

int main(void)
{
/***
 * 1)
    BaseClass *baseVarPtr{ BasePtrFun(true) };
    delete baseVarPtr;
    return 0;
    Output:
    BaseClass Contructor
   2)
    BaseClass *baseVarPtr{ BasePtrFun(false) };
    delete baseVarPtr;
    return 0;
    Output:
    BaseClass Contructor
    DerivedClass Constructor
***/
    BaseClass* b{ BasePtrFun(true) };

	DerivedClass* d{ dynamic_cast<DerivedClass*>(b) }; // use dynamic cast to convert Base pointer into Derived pointer

	std::cout << "The name of the Derived is: " << d->BasePtrFun() << '\n';

	delete b;
    return 0;
}

