#include <iostream>
using std::cout;

int main(void){
    int array[5] {1,2,3,4,5};//Possible and causes no Error
    cout<<"Array First Element:"<<array[0];
    cout<<"\nArray Third Element:"<<array[2];
    cout<<"\nAddress of Array Start:"<<array;
    cout<<"\nAddress of 0x61ff00:"<<*(array+1);
    return 0;
}