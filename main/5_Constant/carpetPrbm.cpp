/*
  *
  *Charges per room = ₹30 
  *Service tax = 6% 
  *  
  * Prompt the user for number of rooms and give the estimate
*/
#include <iostream>
using namespace std;
const int charges_per_room = 30;
const int serivce_tax = 6/100;
int main(void){
    int no_rooms;
    cout<<"...*...Welcome to Kings Room Cleaning Service...*...\n";
    cout<<"Enter the number of Rooms:";
    cin>>no_rooms;
    cout<<"Cost  : "<<(no_rooms*charges_per_room)<<endl;
    cout<<"Tax   : "<<(no_rooms*charges_per_room*serivce_tax)<<endl;
    cout<<"Total : "<<((no_rooms*charges_per_room)+(no_rooms*charges_per_room*serivce_tax))<<endl;
    return 0;
}