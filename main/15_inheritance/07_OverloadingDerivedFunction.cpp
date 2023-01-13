/**
 * @file 07_OverloadingDerivedFunction.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Calling the public function of derived class from main, which calls the public function of base class
 *          without using scope resolution operator and with using friend function.
 * @version 1.0
 * @date 13-01-2023
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
    friend std::ostream& operator<<(std::ostream&out, const BaseClass &b)
    {
        out<<"In BaseClass\n";
        out<<b.accBalance<<endl;
        return out;
    }
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
    friend std::ostream& operator<< (std::ostream& out, const DerivedClass& d)
    {
        out<<"Derived class\n";
        //static_cast Derived to a base object, so we call the right version of operator<<
        out<< static_cast<const BaseClass&>(d);
        return out;
    }
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

int main(void)
{
    DerivedClass dd {5};
    cout<<dd<<endl;
    return 0;
}