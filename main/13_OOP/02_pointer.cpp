#include <iostream>
using namespace std;
class Account{
public:
    int balance;
    void print(int money){
        if (money <100){
            cout<<"\nLow Balace";
        }
        else{
            //Do nothing
        }
    }
};
int main(void){
    cout<<"Welcome to ABC Bank\nBalance in india account is:";
    Account *india = new Account;
    india->balance = 10;
    cout<<(*india).balance;
    india->print(india->balance);
}