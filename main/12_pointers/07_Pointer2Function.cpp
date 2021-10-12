#include <iostream>
using namespace std;
void doublefunc(int *funcptr);
int main(void){
    int value = 5;
    int *main_ptr;
    doublefunc(&value);
    value = 20;
    main_ptr = &value;
    doublefunc(main_ptr);
    return 0;
}

void doublefunc(int *funcptr){
    //*funcptr = *funcptr * 2;
    *funcptr *= 2;
    cout<<"After double the value is: "<<*funcptr<<endl;
}