#include <iostream>
using namespace std;
void say_hello(std::string name);

int main(void){
    string my_name = "Balaji";
    say_hello("Frank");
    say_hello(my_name);
    return 0;
}

void say_hello(std::string name){
    cout<<name<<endl;
}