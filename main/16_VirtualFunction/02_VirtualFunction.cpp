/**
 * @file 02_VirtualFunction.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Virtual keyword is used
 * @version 1
 * @date 26-01-2023
 * 
 * Copyright (c) 2023 @balaji303
 * 
 */
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @brief BaseClass
 * 
 */
class BaseClass
{
public:
    BaseClass(void);
    virtual string GetName(void) const; // ! Virtual keyword is here
};

/**
 * @brief Construct a new Base Class:: Base Class object
 * 
 */
BaseClass::BaseClass(void)
{
    cout<<"BaseClass"<<endl;
}

/**
 * @brief Returns a string
 * 
 * @return string 
 */
string BaseClass::GetName(void) const
{
    return "Baseclass";
}

/**
 * @brief Derived class is inherited from the BaseClass
 * 
 */
class DerivedClass:public BaseClass
{
public:
    DerivedClass(void);
    string GetName(void)const;
};

/**
 * @brief Construct a new Derived Class:: Derived Class object
 * 
 */
DerivedClass::DerivedClass(void)
{
    cout<<"DerivedClass"<<endl;
}

/**
 * @brief Returns a string
 * 
 * @return string 
 */
string DerivedClass::GetName(void) const
{
    return "DerivedClass";
}

/**
 * @brief Main Function
 * 
 * @return int 
 */
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