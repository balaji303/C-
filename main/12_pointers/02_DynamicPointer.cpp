#include <iostream>
using namespace std;
int main(void)
{
    int *int_ptr = nullptr;
    *int_ptr = 2;
    cout<<int_ptr<<endl;
    delete int_ptr;
    cout<<int_ptr<<endl;
    return 0;
}