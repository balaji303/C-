/**
 * @file 03_Virtual.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Virtual keyword is used
 * @version 1
 * @date 26-01-2023
 * 
 * Copyright (c) 2023 @balaji303
 * 
 */
#include <iostream>
#include <stdint.h>
using namespace std;

/**
 * @brief Base Class
 * 
 */
class BaseClass
{
public:
    virtual string GetValue1(uint8_t value);
    virtual string GetValue2(uint16_t value);
};

/**
 * @brief  Returns a character
 * 
 * @param value 
 * @return string 
 */
string BaseClass::GetValue1(uint8_t value)
{
    return "A";
}

/**
 * @brief  Returns a character
 * 
 * @param value 
 * @return string 
 */
string BaseClass::GetValue2(uint16_t value)
{
    return "A";
}

/**
 * @brief Derived class is inherited from the Base class
 * 
 */
class DerivedClass:public BaseClass
{
public:
    string GetValue1(uint16_t value);
    string GetValue2(uint8_t value);
};

/**
 * @brief  Returns a character
 * 
 * @param value 
 * @return string 
 */
string DerivedClass::GetValue1(uint16_t value)
{
    return "B";
}

/**
 * @brief Returns a character
 * 
 * @param value 
 * @return string 
 */
string DerivedClass::GetValue2(uint8_t value)
{
    return "B";
}

/**
 * @brief Main Function
 * 
 * @return int 
 */
int main(void)
{
    DerivedClass d{};
    BaseClass& ptrBase{d};
    // ? Here even after virtual function it points to BaseClass::GetValue only
    // ? So using override keyword
    cout<<ptrBase.GetValue1(5);
    return 0;
}