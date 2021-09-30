#include <iostream>
using namespace std;
int main(void){
    int arr[] = {1,2,3,4};
    cout<<arr<<endl; //Address
    cout<<*arr<<endl;//1
    int *arr_ptr = arr;
    cout<<arr_ptr<<endl;//Address
    cout<<(arr_ptr+1)<<endl;//arr ptr is increased by 4 not 1
    cout<<*arr_ptr<<endl;//1
    cout<<arr_ptr[2]<<endl;//Indexing via Pointer
    cout<<*(arr_ptr+2)<<endl;
    return 0;
}
/**
 * 
 * Subscript Notation   |   Offset Notation
 * ---------------------------------------------
 * array_name[index]    |  *(array_name + index)
 * pointer_name[index]  |  *(pointer_name + index)
 * 
*/