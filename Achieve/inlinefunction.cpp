#include <iostream>
using namespace std;
class Test{
  private:
   int a,b,result;
  public:
   int add(int a,int b);
   inline void display(int a,int b) //Function having only one line
   {
       cout<<"The result is:"<<add(a,b); //Function calling another function
   }
};
int Test::add(int a, int b) //Global variable
   {
    result =a+b;
    return result;
   }
int main()
{
    Test Obj;
    int a1,b1;
    a1=3;
    b1=2;
    Obj.display(a1,b1);  
   return 0;
}
