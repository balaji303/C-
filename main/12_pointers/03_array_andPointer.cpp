#include <iostream>
using namespace std;
int main(void){
    int arr[] = {1,2,3,4};
    cout<<arr<<endl; //Address
    cout<<*arr<<endl;//1
    int *arr_ptr = arr;
    cout<<arr_ptr<<endl;//Address
    cout<<*arr_ptr<<endl;//1
    return 0;
}