#include <iostream>
#include <stdint.h>
using namespace std;

class rupee
{
    uint32_t amount;
public:
    void set_money(uint32_t set_amount);
    uint32_t get_money(void)const;
    /* Constructor */
    rupee(uint32_t argu_rupee);
};

rupee::rupee(uint32_t argu_rupee):amount{argu_rupee}
{
    cout<<"Constructor Called"<<endl;
}

void rupee::set_money(uint32_t set_amount)
{
    amount = set_amount;
}

uint32_t rupee::get_money(void) const
{
    return amount;
}
rupee operator-(const rupee &r1, const rupee &r2);

int main(void)
{
    rupee a1{8};// Constructor assigns the value
    rupee a2{2};// Constructor assigns the value
    rupee sum{a1 - a2};
    cout<<sum.get_money()<<endl; // 10
    return 0;
}

/* This is not a Member function, so no scope operator */
rupee operator-(const rupee &r1, const rupee &r2)
{
    /* We dont access the private members directly but using class members */
    return rupee{ r1.get_money() + r2.get_money()};
}