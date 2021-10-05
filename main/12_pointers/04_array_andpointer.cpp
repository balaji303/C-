#include <iostream>

using namespace std;
int main(void){
    int score[] {11,22,33};
    cout<<"Value of score: "<<score<<endl;
    int *score_ptr {score};
    cout<<"Value of score_ptr: "<<score_ptr<<endl;

    cout<<"Subscript Array Notation____________\n";
    cout<<score[0]<<endl;
    cout<<score[1]<<endl;
    cout<<"Subscript Pointer Notation____________\n";
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;

    cout<<"Offset Array Notation____________\n";
    cout<<*(score)<<endl;
    cout<<*(score+1)<<endl;
    cout<<*(score+2)<<endl;
    cout<<"Offset Pointer Notation____________\n";
    cout<<*(score_ptr)<<endl;
    cout<<*(score_ptr+1)<<endl;
    cout<<*(score_ptr+2)<<endl;

    return 0;
}