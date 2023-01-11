/**
 * @file 06_NewFuncToDerivedClass.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Accessing the private members of a base class from its devired class
 * @version 1.0
 * @date 11-01-2023
 * 
 * Copyright (c) 2022 @balaji303
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
protected:
    uint8_t accBalance;
public:
    //Constructor
    BaseClass(uint8_t value);
};

/**
 * @brief Construct a new Base Class:: Base Class object
 * 
 * @param value 
 */
BaseClass::BaseClass(uint8_t value):accBalance{value}
{
    // cout<<"BaseClass Constructor called accBalance:"<<value<<endl;
    printf("BaseClass Constructor called accBalance: %d\n",accBalance);
}

/**
 * @brief DerivedClass gets inherited from the BaseClass
 * 
 */
class DerivedClass: public BaseClass
{
public:
    //Constructor
    DerivedClass(uint8_t intvalue);
    uint8_t getAccBalance(void) const;
};

/**
 * @brief Construct a new Derived Class:: Derived Class object
 * 
 * @param intvalue 
 */
DerivedClass::DerivedClass(uint8_t intvalue):BaseClass{intvalue}
{
    printf("DerivedClass Constructor called accBalance: %d\n",accBalance);
}

/**
 * @brief Access the private member of BaseClass using devired class
 * 
 * @return uint8_t 
 */
uint8_t DerivedClass::getAccBalance(void) const
{
    //accBalance is a private member of BaseClass
    return accBalance;
}


/**
 * @brief Main function
 * 
 * @return int 
 */
int main(void)
{
    DerivedClass der(5);
    // BaseClass bas(6);
    // printf("accBalance %d",bas.getAccBalance()); // ! This is a error
    // * Since there is no getAccBalance in BaseClass class the above line thorughs an error
    printf("accBalance %d",der.getAccBalance());
    return 0;
}