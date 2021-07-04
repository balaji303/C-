#include <iostream>
#include <climits>

using std::cout;
using std::endl;

int main(void){
    int age {12};
    cout<<"Size of age "<<sizeof(age)<<endl;
    cout<<"Minimum Values\n";
    cout<<"char:"<<CHAR_MIN<<endl;
    cout<<"int:"<<INT_MIN<<endl;
    cout<<"short:"<<SHRT_MIN<<endl;
    cout<<"long:"<<LONG_MIN<<endl;
    cout<<"long long:"<<LLONG_MIN<<endl;

    cout<<"MAXimum Values\n";
    cout<<"char:"<<CHAR_MAX<<endl;
    cout<<"int:"<<INT_MAX<<endl;
    cout<<"short:"<<SHRT_MAX<<endl;
    cout<<"long:"<<LONG_MAX<<endl;
    cout<<"long long:"<<LLONG_MAX<<endl;
    return 0;
}