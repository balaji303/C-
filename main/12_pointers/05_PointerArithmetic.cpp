#include <iostream>

using namespace std;
int main(void){
    int score[]={20,30};
    int *ptr1 = score;
    int *ptr2 = score+1;
    cout<<"ptr1: "<<*ptr1<<endl<<"ptr2: "<<*ptr2<<endl;
    int *ptr3,*ptr4;
    ptr3 = (ptr1 + 1);//ptr+sizeof(int)
    cout<<"ptr3: "<<*ptr3<<endl;
    ptr4 = (ptr2-1);
    cout<<"Ptr4: "<<*ptr4<<endl;
    if (ptr4 == ptr1){
        cout<<"Equal\n";
    }
    cout<<"Distance between pointers: "<<(ptr2-ptr1)<<endl;
    return 0;
}