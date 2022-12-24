/**
 * @file 05_constructorChain.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief 
 * @version 1.0
 * @date 22-12-2022
 * 
 * Copyright (c) 2022 @balaji303
 * 
 */
#include <iostream>
#include <stdint.h>
using namespace std;

/**
 * @brief Top calls in heritence
 * 
 */
class A
{
private:
    uint8_t aa;
public:
    A(uint8_t argA);
};

/**
 * @brief Construct a new A:: A object
 * 
 * @param argA 
 */
A::A(uint8_t argA):aa{argA}
{
    cout<<"A's constructor is called\n";
}

/**
 * @brief Class B is derived from the Class A
 * 
 */
class B:public A
{
private:
    uint16_t bb;
public:
    B(uint16_t argB, uint8_t argA);
};

/**
 * @brief Construct a new B:: B object
 * 
 * @param argB 
 */
B::B(uint16_t argB, uint8_t argA):bb{argB},A{argA}
{
    cout<<"B's constructor is called\n";
}

/**
 * @brief Class C is a derived class of Class B
 * 
 */
class C:public B
{
private:
    float cc;
public:
    C(float argC, uint16_t argB, uint8_t argA);
};


/**
 * @brief Construct a new C:: C object
 * 
 * @param argC 
 * @param argB 
 * @param argA 
 */
C::C(float argC, uint16_t argB, uint8_t argA):cc{argC},B{argB,argA}
{
    cout<<"C's constructor is called\n";
}

/**
 * @brief Class D of derived from Class C
 * 
 */
class D:public C
{
private:
    string dd;
public:
    D(string argD, float argC, uint16_t argB, uint8_t argA);
};

/**
 * @brief Construct a new D:: D object
 * 
 * @param argD 
 * @param argC 
 * @param argB 
 * @param argA 
 */
D::D(string argD, float argC, uint16_t argB, uint8_t argA):dd{argD},C{argC,argB,argA}
{
    cout<<"D's constructor is called\n";
}

/**
 * @brief The main function calling the most base class
 * 
 * @return int 
 */
int main(void)
{
    D bada{"Hi",2.3,2000,100};
    return 0;
}