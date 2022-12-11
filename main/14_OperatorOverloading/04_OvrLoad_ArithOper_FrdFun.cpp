#include <iostream>
#include <stdint.h>
using namespace std;

class rupee
{
    uint32_t amount;
public:
    uint32_t get_money(void);
    /* Constructor */
    rupee(uint32_t argu_rupee);
    /* THis is a Friend Function */
    friend rupee operator-(const rupee &r1, const rupee &r2);
};

rupee::rupee(uint32_t argu_rupee):amount{argu_rupee}
{
    cout<<"Constructor Called"<<endl;
}

uint32_t rupee::get_money(void)
{
    return amount;
}

/* This is not a Member function, so no scope operator */
/* THis is a Friend Function */
rupee operator-(const rupee &r1, const rupee &r2)
{
    /* Using Frd function we can access the private variables of a class, outside the class */
    return rupee{r1.amount + r2.amount};
}

int main(void)
{
    /* Although we use - it does the +, because we use the operator overloading code */
    rupee a1{3};// Constructor assigns the value
    rupee a2{2};// Constructor assigns the value
    rupee sum{a1 - a2}; //5
    cout<<sum.get_money()<<endl;
    return 0;
}