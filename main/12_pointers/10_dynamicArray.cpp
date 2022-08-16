#include <iostream>
using namespace std;
int *createArray(int size, int value);
int main(void){
    int *arr = nullptr;
    arr = createArray(5,2);
    cout<<arr;
    for(int i=0;i<5;i++){
        cout<<(arr+i)<<endl;
    }
    delete arr;
    return 0;
}
int *createArray(int size, int value){
    int *array = nullptr;
    for(int i=0;i<size;i++){
        *(array+i) = value;
    }
    return array;
}