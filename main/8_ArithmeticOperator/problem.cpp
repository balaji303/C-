/**
 * User enters 95cents the output should print
 * Dollors: 0
 * Quarter: 3
 * Dime   : 1
 * nickel : 1
 * Pennies: 2
 * 
 * where
 * 
 * 1 Dollor is 100 cent
 * 1 Quarter is 25 cent
 * 1 Dime is 10 cent
 * 1 Nickel is 5 cent
 * 1 Pennies is 1 cent
*/

#include <iostream>
using namespace std;
int main(void){
    int usr_cent,cent,dollor,quarter,dime,nickel,pennies;
    usr_cent = cent = dollor = quarter = dime = nickel = pennies = 0;
    cout<<"Enter the Amount in cents:"<<endl;
    cin>>usr_cent;
    cent=usr_cent;
    dollor = cent/100;
    cent = cent%100;
    quarter = cent/25;
    cent = cent%25;
    dime = cent/10;
    cent = cent%10;
    nickel = cent/5;
    cent = cent%5;
    pennies = cent/1;
    /*Final Print*/
    cout<<"Enter cents is:"<<usr_cent;
    cout<<"\nDollors: "<<dollor;
    cout<<"\nQuarter: "<<quarter;
    cout<<"\nDime: "<<dime;
    cout<<"\nNickel: "<<nickel;
    cout<<"\nPennies: "<<pennies;
    
    return 0;
}