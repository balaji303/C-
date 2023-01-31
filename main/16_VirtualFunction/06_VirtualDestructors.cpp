/**
 * @file 06_VirtualDestructors.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief This code is to Show what happens without virtual keyword in destructor
 * @version 1
 * @date 30-01-2023
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
    ~BaseClass(void);// ! No Virtual Function here
};

BaseClass::~BaseClass(void)
{
    cout<<"This Msg is from BaseClass destructor\n";
}

class DerivedClass: public BaseClass
{
private:
    /* data */
    uint16_t *memberArray{};
public:
    DerivedClass(uint16_t arrayLength);
    ~DerivedClass(void);
};

DerivedClass::DerivedClass(uint16_t arrayLength):memberArray{new uint16_t[arrayLength]}
{
    cout<<"This Msg is from DerivedClass constructor\n";
}

DerivedClass::~DerivedClass(void)
{
    cout<<"This Msg is from DerivedClass destructor\n";
    delete memberArray;
}

int main(void)
{
    DerivedClass der{ 2 };
    BaseClass* base { &der };

    // Call the base destructor
    delete base;

    return 0;
}