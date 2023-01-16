/**
 * @file 08_hidingInheritedFunctional.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Hiding the inheritance function using protected class members
 * @version 1.0
 * @date 15-01-2023
 * 
 * Copyright (c) 2022 @balaji303
 * 
 */

#include <iostream>
#include <stdint.h>
using namespace std;

class BaseClass
{
private:
    uint8_t accValue;
public:
    //Constructor
    BaseClass(uint8_t argValue);
protected:
    void printAccValue(void);
};

/**
 * @brief Construct a new Base Class:: Base Class object
 * 
 * @param argValue 
 */
BaseClass::BaseClass(uint8_t argValue):accValue{argValue}
{
    cout<<"Print from the BaseClass Constructor\n";
}

/**
 * @brief Prints the BaseClass's private member variable
 * 
 */
void BaseClass::printAccValue(void)
{
    printf("BaseClass Protected function says AccValue %d",accValue);
}


class DerivedClass: public BaseClass
{
public:
    //Constructor
    DerivedClass(uint8_t argValue);
    // * printAccValue is inherited as protected, so public has no access to it
    // * we are changing the declaration of "using" to public
    using BaseClass::printAccValue; //! There is no parameters here
};

DerivedClass::DerivedClass(uint8_t argValue):BaseClass{argValue}
{
    cout<<"Message from Derived Class\n";
}

/**
 * @brief Main Function
 * 
 * @return int 
 */
int main(void)
{
    DerivedClass dd {5};
    // cout<<DerivedClass.printAccValue(); //! Error occurs here
    // BaseClass &base
    // {
    //     static_cast <BaseClass&>(dd)
    // };
    // cout<<base.printAccValue;
    dd.printAccValue();
    return 0;
}