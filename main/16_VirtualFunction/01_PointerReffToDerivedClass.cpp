/**
 * @file 01_PointerReffToDerivedClass.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Accessing class via pointer
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

/**
 * @brief BaseClass
 * 
 */
class BaseClass
{
protected:
    uint8_t accBalance;
public:
    BaseClass(uint8_t argBalance);
    string getName(void) const;
};

/**
 * @brief Construct a new Base Class:: Base Class object
 * 
 * @param argBalance 
 */
BaseClass::BaseClass(uint8_t argBalance):accBalance{argBalance}
{
    cout<<"Message from the BaseClass\n";
}

/**
 * @brief Returns a string
 * 
 * @return string 
 */
string BaseClass::getName(void) const
{
    return "BaseClass";
}

/**
 * @brief Derived class is derived from the baseclass
 * 
 */
class DerivedClass:public BaseClass
{
public:
    DerivedClass(uint8_t argValue);
    string getName(void);
};

/**
 * @brief Construct a new Derived Class:: Derived Class object
 * 
 * @param argValue 
 */
DerivedClass::DerivedClass(uint8_t argValue):BaseClass{argValue}
{
    cout<<"Message from the Derived Class\n";
}

/**
 * @brief Returns a name as string
 * 
 * @return string 
 */
string DerivedClass::getName(void)
{
    return "DerivedClass\n";
}

/**
 * @brief Main Function
 * 
 * @return int 
 */
int main(void)
{
    DerivedClass der{5};
    cout<<"Hi! This message is from "<<der.getName()<<endl;
    // This is pointing by reference
    DerivedClass& ptrDerRef{der};
    cout<<"Hello.. This is from "<<ptrDerRef.getName();
    // This is pointing by value
    DerivedClass* ptrDerVal{&der};
    cout<<"Vanakkam, This is from "<<ptrDerVal->getName();
    return 0;
}