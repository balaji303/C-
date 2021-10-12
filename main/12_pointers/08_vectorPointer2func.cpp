#include <iostream>
#include <vector>
using namespace std;

void display (vector <char> *ptr );
int main(void){
    vector <char> namestr {'a','b','c'};
    display(&namestr);
    cout<<"-------------"<<endl;
    cout<<namestr.at(2);
    cout<<namestr[0];
    cout<<endl;
    return 0;
}
void display (vector <char> *v ){
    cout<<(*v).at(0);
}