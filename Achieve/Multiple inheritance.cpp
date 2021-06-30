//Multiple inheritance
#include <iostream>
using namespace std;
class Base{
  protected:
    int a,b;
  public:
    void set(int x,int y){
     a=x;
     b=y;
     
    }
};

class Base2{
  public:
   void display(int i);
};
void Base2::display(int i){
  cout<< "The value is " <<i<<"\n";   
};
class derived:public Base,public Base2{
  public:
    int sum(){
      return(a+b);   
    }
};
int main(){
    int z;
    derived obj;
    obj.set(2,3);
    z=obj.sum();
    obj.display(z);
return 0;    
}
