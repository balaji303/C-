#include <iostream>

using namespace std;
int main(void){
    int score[]={20,30};
    int *ptr1 = score;
    int *ptr2 = score+1;
    cout<<*ptr1<<endl<<*ptr2<<endl;
    int *ptr3;
    ptr3 = (ptr1 + 1);//ptr+sizeof(int)
    cout<<*ptr3;
    return 0;
}