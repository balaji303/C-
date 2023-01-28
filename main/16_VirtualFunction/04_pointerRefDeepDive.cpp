/**
 * @file 04_pointerRefDeepDive.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Virtual and Pointers example
 * @version 1
 * @date 26-01-2023
 * 
 * Copyright (c) 2023 @balaji303
 * 
 */
#include <iostream>
#include <stdint.h>
#include <string.h>
using namespace std;

/**
 * @brief ClassA
 * 
 */
class ClassA
{
public:
    virtual void PrintSmall(void); // ! Virtual here
    void PrintCapital(void);
};

/**
 * @brief Returns a character
 * 
 */
void ClassA::PrintSmall(void)
{
    cout<<"a";
}

/**
 * @brief Returns a character
 * 
 */
void ClassA::PrintCapital(void)
{
    cout<<"A";
}

/**
 * @brief Class B is inherited from the class A
 * 
 */
class ClassB:public ClassA
{
public:
    void PrintSmall(void);
    void PrintCapital(void);
};

/**
 * @brief Returns a character
 * 
 */
void ClassB::PrintSmall(void)
{
    cout<<"b";
}

/**
 * @brief Returns a character
 *  
 */
void ClassB::PrintCapital(void)
{
    cout<<"B";
}

/**
 * @brief ClassC is inherited from ClassA
 * 
 */
class ClassC:public ClassA
{
private:
    ClassA memA{};
public:
    virtual ClassA& get(void); // ! Virtual here
};

/**
 * @brief Returns a Class variable
 * 
 * @return ClassA& 
 */
ClassA& ClassC::get(void)
{
    return memA;
}

/**
 * @brief ClassD is inherited from the ClassC
 * 
 */
class ClassD:public ClassC
{
private:
    ClassB memB{};
public:
    ClassB& get(void);
};

/**
 * @brief Returns a Class variable
 * 
 * @return ClassB& 
 */
ClassB& ClassD::get(void)
{
    return memB;
}

/**
 * @brief Main function
 * 
 * @return int 
 */

// * Able to get the required output without the override keyword
int main(void)
{
    // ClassB bb{};
    // ClassA* ptraa(&bb);
    // ptraa->PrintCapital();
    // ptraa->PrintSmall();
    
    ClassD dd{};
    dd.get().PrintCapital();
    dd.get().PrintSmall();
    cout<<"\n";
    
    ClassC cc{};
    cc.get().PrintCapital();
    cc.get().PrintSmall();
    cout<<"\n";
    
    ClassC& refC{dd};
    refC.get().PrintCapital();
    refC.get().PrintSmall();
    return 0;
}

/**
 * 
 * Output:
 * 
 * Bb
 * Aa
 * Ab
 * 
*/