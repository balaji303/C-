#include <iostream>
using namespace std;
int main(void){
    int array_index;
    int harray[100];
    cout<<"Enter the Array index\n";
    cin>>array_index;
    for (int i = 0; i < array_index; i++)
    {
        cout<<"Enter the "<<i<<"th element\n";
        cin>>harray[i]; 
    }
    cout<<"The Entered Elements are\n";
    for (int i = 0; i < array_index; i++)
    {
        cout<<"Array["<<i<<"]="<<harray[i]<<endl;
    }
    
    return 0;
}