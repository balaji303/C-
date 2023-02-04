#include <iostream>
//#include <conio>  //No need
using namespace std;

int main(){
    int i,a,*p;
    cout<<"Enter the number of inputs\n";
    cin>>a;
    p=new int; //DMA  //p=new int[1]  //p=new int[i]
    if(p==0){
        cout<<"Memory cannot be allogated\n";
    }
    for(i=1;i<=a;i++){
        cout<<"Enter value for p["<<i<<"]";
        cin>>p[i];
    }
    cout<<"The Entered values are:\n";
    for(i=1;i<=a;i++){
        cout<<i<<"th Value you entered is "<<p[i]<<endl; 
    }
    delete[] p; //DMdeAs
}
