//TODO- Add Program to Print
#include <iostream>
#include <vector>
using namespace std;

void print(double num1, double num2);
void print(int num1, double num2);
void print(int num1, int num2);
void print(double num1, int num2);
int main(void){
    print(1,1);
    print(2,1.5);
    print(3.3,4.4);
    print(7.1,8);
    return 0;
}
void print(int num1, int num2){
    cout<<"***"<<endl;
    cout<<"Int num1: "<<num1<<endl;
    cout<<"Int num2: "<<num1<<endl;
    cout<<"***"<<endl;
}
void print(double num1, double num2){
    cout<<"***"<<endl;
    cout<<"double num1: "<<num1<<endl;
    cout<<"double num2: "<<num1<<endl;
    cout<<"***"<<endl;
}
void print(int num1, double num2){
    cout<<"***"<<endl;
    cout<<"Int num1: "<<num1<<endl;
    cout<<"double num2: "<<num1<<endl;
    cout<<"***"<<endl;
}
void print(double num1, int num2){
    cout<<"***"<<endl;
    cout<<"double num1: "<<num1<<endl;
    cout<<"Int num2: "<<num1<<endl;
    cout<<"***"<<endl;
}