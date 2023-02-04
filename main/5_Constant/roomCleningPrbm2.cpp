/*
  *Charges per Single room = ₹25 
  *Charges per Double room = ₹30 
  *Service tax = 6% 
  *  
  * Prompt the user for number of rooms and give the estimate
*/
#include <iostream>
using namespace std;
int main(void){
  const int single_room_charge = 25;
  const int double_room_charge = 30;
  float service_tax = 6/100;

  int no_singleroom;
  int no_doubleroom;

  cout<<"Welcome to Kings Room Cleaning Service\n--------------------------------------\n";
  cout<<"Enter the Number of Single room:";
  cin>>no_singleroom;
  cout<<"\nEnter the Number of Double room:";
  cin>>no_doubleroom;

  int singleroomcost = no_singleroom*single_room_charge ;
  int doubleroomcost = no_doubleroom*double_room_charge;
  int total = singleroomcost+doubleroomcost;
  float tax = total*6/100 ;
  

  cout<<"Chargers for Single Room:"<<singleroomcost<<endl;
  cout<<"Chargers for Double Room:"<<doubleroomcost<<endl;

  cout<<"Tax   : "<<tax<<endl;
  total = total+tax;
  cout<<"Total : "<<total<<endl;

  return 0;
}

/**
 * 
 * 
 * 
 * 
    

*/