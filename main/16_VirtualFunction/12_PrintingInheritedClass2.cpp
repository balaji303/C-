#include <iostream>
#include <string.h>
using namespace std;

class BaseClass
{
public:
    virtual string ID(void)const;
    friend ostream& operator<<(ostream& out, const BaseClass& b)
    {
        out<<b.ID();
        return out;
    }
};

string BaseClass::ID(void) const
{
    return "BaseClass ID";
}

class DerivedClass: public BaseClass
{
public:
    string ID(void)const;
    friend ostream& operator<<(ostream&out, const DerivedClass& d)
    {
        out<<d.ID();
        return out;
    }
};

string DerivedClass::ID(void) const
{
    return "DerivedClass ID";
}

int main(void)
{
    DerivedClass dd{};
    cout<<dd<<endl;

    BaseClass bb{};
    cout<<bb<<endl;
    
    BaseClass& bb_ptr{dd};
    cout<<bb_ptr<<endl;

    return 0;
}

/*
Output:

    DerivedClass ID
    BaseClass ID
    DerivedClass ID
*/