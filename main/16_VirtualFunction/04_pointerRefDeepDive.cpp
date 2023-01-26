#include <iostream>
#include <stdint.h>
#include <string.h>
using namespace std;

class ClassA
{
public:
    virtual void PrintSmall(void); // ! Virtual here
    void PrintCapital(void);
};

void ClassA::PrintSmall(void)
{
    cout<<"a";
}

void ClassA::PrintCapital(void)
{
    cout<<"A";
}

class ClassB:public ClassA
{
public:
    void PrintSmall(void);
    void PrintCapital(void);
};

void ClassB::PrintSmall(void)
{
    cout<<"b";
}

void ClassB::PrintCapital(void)
{
    cout<<"B";
}

class ClassC:public ClassA
{
private:
    ClassA memA{};
public:
    virtual ClassA& get(void); // ! Virtual here
};

ClassA& ClassC::get(void)
{
    return memA;
}

class ClassD:public ClassC
{
private:
    ClassB memB{};
public:
    ClassB& get(void);
};

ClassB& ClassD::get(void)
{
    return memB;
}

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