/**
 * @file 03_InheritanceChain.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief This is a example for inheritance chain
 * @version 1
 * @date 18-01-2023
 * 
 * Copyright (c) 2023 @balaji303
 * 
 */
#include <iostream>
#include <stdint.h>
using namespace std;
class A
{
public:
    //Constructor
    A();
};
A::A(void)
{
    cout<<"A's constructor\n";
}

class B:public A
{
public:
    //Constructor
    B();
};
B::B(void)
{
    cout<<"B's Constructor\n";
}

class C:public B
{
public:
    //Constructor
    C();
};
C::C(void)
{
    cout<<"C's constructor\n";
}

class D:public C
{
public:
    D();
};
D::D(void)
{
    cout<<"D's Constructor\n";
}

int main(void)
{
    cout<<"Calling one\n";
    A a;
    cout<<"Calling two\n";
    B b;
    cout<<"Calling All\n";
    D d;
    return 0;
}