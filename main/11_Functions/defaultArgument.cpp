#include <iostream>
using namespace std;
void cal(int num1, int num2 = 1, int num3 = 2);
int main(void){
    cal(2);   //No second Argument so takes default Argument
    cal(5,5); //2 Argument is present so skips default Argument
    cal(5,5,5); //3 Argument is present so skips default Argument
    return 0;
}
void cal(int num1,int num2, int num3){
    int sum = num1 + num2 + num3;
    cout<<"Sum of Values is: "<<sum<<endl;
}
//Dr. Nathitheeran M.B.B.S
//Mr. Balaji B.E.