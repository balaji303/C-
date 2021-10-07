#include <iostream>
using namespace std;
int main(void){
    int highmark = 100;
    int passmark = 30;
    const int *balajimark = &highmark;
    int *const rakeshmark = &passmark;
    const int *const sathishmark = &highmark;
    cout<<"Balaji: "<<*balajimark<<endl;//100
    cout<<"Rakesh: "<<*rakeshmark<<endl;//30
    balajimark = &passmark;
    cout<<"Balaji: "<<*balajimark<<endl;//30
    *rakeshmark = highmark;
    cout<<"Rakesh: "<<*rakeshmark<<endl;//100
    //*balajimark = 10;-> Error
    //rakeshmark = &highmark -> Error
    //*sathishmark = 10;-> Error
    //sathishmark = &highmark -> Error
    return 0;
}