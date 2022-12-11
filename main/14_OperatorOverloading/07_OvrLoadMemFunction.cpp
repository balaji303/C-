#include <iostream>
#include <stdint.h>
using namespace std;

class Wallet
{
private:
    uint32_t money;
public:
    Wallet(uint32_t balance);
    ~Wallet();
    uint32_t getMoney(void);
    Wallet operator+(uint32_t value);
};

Wallet::Wallet(uint32_t balance):money{balance}
{
    cout<<"Constructor Called"<<endl;
}

Wallet::~Wallet(void)
{
    cout<<"Destructor called"<<endl;
}

/* Get Function */
uint32_t Wallet::getMoney(void)
{
    return money;
}

/* The Below functions is a member function */
Wallet Wallet::operator+(uint32_t value)
{
    return Wallet{ money + value};
}

int main(void)
{
    Wallet balaji{40}; //Constructor assigns value
    Wallet sathish{30}; //Constructor assigns value
    Wallet pandian{balaji + 2};
    cout<<"Get Money function: "<<pandian.getMoney()<<endl;
    return 0;
}