#include <iostream>
/* Here there is no using namespace std, so include std in all calls */
int main()
{
    int num;
    /* class-name :: identifier */
    /* namespace::identifier */
    std::cout<<"Enter Number: ";
    //std::cin>>num;
    num = 3;
    std::cout<<"The number entered is "<<num<<" my Fav number too"<<std::endl;
    return 0;
}

class foo
{
  public:
    foo();/* Constructor */
    void bar(); /* Function */
    ~foo();/* Destructor */
};

foo::foo()
{
  // Implement the constructor
}

void foo::bar()
{
  // Implement bar
}

foo::~foo()
{
  // Implement the destructor
}

void bar()
{
  // Implement different bar
}