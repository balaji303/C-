#include <iostream>
using namespace std;
int main(void)
{
    cout<<"Hello"<<endl;
    int *int_ptr = nullptr;
    cout<<"Hello"<<endl;
    /* Can't assign a value to a NULL pointer so Program stops */
    *int_ptr = 2;
    cout<<"Hello"<<endl;
    cout<<int_ptr<<endl;
    delete int_ptr;
    cout<<int_ptr<<endl;
    return 0;
}