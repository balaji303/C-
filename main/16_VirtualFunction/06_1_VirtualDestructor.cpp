/**
 * @file 06_1_VirtualDestructor.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Virtual Destructor example code
 * @version 1
 * @date 31-01-2023
 * 
 * Copyright (c) 2023 @balaji303
 * 
 */
#include <iostream>
#include <stdint.h>
#include <string.h>
using namespace std;

class BaseClass
{
public:
    virtual ~BaseClass(void);  // ! Virtual is used here
};

BaseClass::~BaseClass(void)
{
    cout<<"This Msg is from BaseClass Destructor\n";
}

class DerivedClass:public BaseClass
{
private:
    uint8_t *derMember;
public:
    DerivedClass(uint8_t val);
    virtual ~DerivedClass(void); // ! Virtual is used here
};

DerivedClass::DerivedClass(uint8_t val):derMember{new uint8_t [val]}
{
    cout<<"This Msg is from DerivedClass Constructor\n";
}

/**
 * @brief Destroy the Derived Class:: Derived Class object
 * 
 */
DerivedClass::~DerivedClass(void)
{
    // * If virtual is not used, this destructor is not called
    delete derMember;
    cout<<"This Msg is from DerivedClass Destructor\n";
}

int main(void)
{
    DerivedClass der{22};
    BaseClass* bas{&der};
    delete bas;
    return 0;
}