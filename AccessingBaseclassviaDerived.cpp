#include <iostream>
using namespace std;
class Base{
  private:
    int x;
  public:
    void add(){
        int c=8;
        x=c+2;
    }
    inline void dis(){
        cout<<"The base value is : "<<x<<endl;
    }
    void add3(){
        int c=8;
        x=c+2;
    }
    inline void dis3(){
        cout<<"The base value via derived is : "<<x<<endl;
    }
};
class derived:public Base
{
    private:
     int z;
    public:
      void add(){
          int d=2;
          z=d+8;
      }
      inline void dis(){
         cout<< "The Derived value is: "<<z<<endl;  
        }
};
int main(){  //Function overriding  
    Base b_obj;
    derived d_obj;
    b_obj.add();   //accessing base class function
    b_obj.dis();   //accessing base class function
    d_obj.add();   //accessing derived class function
    d_obj.dis();   // accessing derived class function
    d_obj.add3();   //accessing base class function via derived
    d_obj.dis3();   // accessing base class function via derived
 return 0;   
}
