#include <iostream>
#include <stdint.h>
using namespace std;

class BaseClass
{
public:
    friend ostream& operator<<(ostream& out, const BaseClass& b)
    {
        out<<"BaseClass\n";
        return out;
    }
};

class DerivedClass:public BaseClass
{
public:
    friend ostream& operator<<(ostream&out, const DerivedClass& d)
    {
        out<<"DerivedClass\n";
        return out;
    }
};

int main(void)
{
    BaseClass bb{};
    cout<<bb<<endl;
    
    DerivedClass dd{};
    cout<<dd<<endl;
/**
 * 
 * Output:
    BaseClass

    DerivedClass

*/
    return 0;
}