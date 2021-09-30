#include <iostream>
using namespace std;
int main(void){
    int *p;//Also int* p; is valid
    cout<<"Value of p:"<<p<<endl;
    cout<<"Addr of p:"<<&p<<endl;
    cout<<"size of p:"<<sizeof(p)<<endl;
    p = nullptr;
    cout<<"Value of p:"<<p<<endl;
    cout<<"Addr of p:"<<&p<<endl;
    cout<<"size of p:"<<sizeof(p)<<endl;
    return 0;
}