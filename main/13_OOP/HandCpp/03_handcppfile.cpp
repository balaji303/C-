#include <iostream>
#include "account.h"
using namespace std;

int main(void){
    Account frank;
    double bal1 = 20.50;
    frank.set_balance(bal1);
    double bal = frank.get_balance();
    cout<<"Balance = "<<bal;
    return 0;
}