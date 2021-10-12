#include <iostream>
using namespace std;
int *largestPointer(int *ptr1,int *ptr2);
int main(void){
    int a=2,b=5;
    int c = *largestPointer(&a,&b);
    cout<<c<<endl;
    return 0;
}
int *largestPointer(int *ptr1,int *ptr2){
    if (*ptr1 > *ptr2){
        return ptr1;
    }
    else{
        return ptr2;
    }

}