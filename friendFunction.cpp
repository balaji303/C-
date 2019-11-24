// Friend function
#include <iostream>
using namespace std;
class Test{
  private:
   int a,b,result;
   friend class Book;
  public:
  
   inline void display(int a,int b) //Fnuction having only one line
   {
       cout<<"The result is:"<<add(a,b)<<endl; //Function calling another function
   }
   int add(int a, int b) 
   {
    result =a+b;
    return result;
   }
};

class Book{
   private:
   int x;
   public:
    Book(){        //Constructor
        x=2;
    }
       void sub();
};
void Book::sub(){
    Test Obj2;
    x=Obj2.add(3,2)-x;
    cout<<"The output is:" << x;
}
int a1=3,b1=2;

int main()
{
    Test Obj;
    Book Obj1;
    
    Obj.display(a1,b1);
    Obj1.sub();
   return 0;
}
