#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

int main(void){
    float num;
    cout<<"Enter a number\n";
    cin>>num;
    cout<<"Ceil:"<<ceil(num);
    cout<<"\nFloor:"<<floor(num);
    cout<<"\nRound:"<<round(num);
    return 0;
}