/**
 * @file 05_Override.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief override functionality example
 * @version 1
 * @date 30-01-2023
 * 
 * Copyright (c) 2023 @balaji303
 * 
 */
#include <iostream>
#include <stdint.h>
using namespace std;

/**
 * @brief This is a BaseClass
 * 
 */
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

/**
 * @brief Prints a string
 * 
 */
void BaseClass::PrintThis(void)
{
    cout<<"Hi from BaseClass\n";
}

/**
 * @brief DerivedClass is a BaseClass pointer
 * 
 */
class DerivedClass: public BaseClass
{
public:
    DerivedClass* GetThis (void) override; //! Override is here
    void PrintThis(void);
};

/**
 * @brief Prints a string and returns the class pointer
 * 
 * @return DerivedClass* 
 */
DerivedClass* DerivedClass::GetThis (void)
{
    cout<<"GetThis() from DerivedClass\n";
    return this;
}

/**
 * @brief Prints a string
 * 
 */
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