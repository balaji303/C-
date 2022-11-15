#include <iostream>
#include <string>

using namespace std;
class Moveclass{
private:
    int *data;
public:
    void set_data_value(int d)
    {
        *data = d;
    }
    
    int get_data(void)
    {
        return *data;
    }
    //constructor
    Moveclass(int d);
    //Copy constructor
    /* Deep copy constructor  */
    Moveclass(const Moveclass &source);
    //Destructor
    ~Moveclass();
};

Moveclass::Moveclass(int d)
{
    data = new int;
    *data = d;
    cout<<"Constructor Called"<<endl;
}

Moveclass::Moveclass(const Moveclass &source):data(source.data)
{
    cout<<"Deep Constructor Called-Deep"<<endl;
}

Moveclass::~Moveclass(void)
{
    delete data;
    cout<<"Destructor Called"<<endl;
}

void display_Moveclass(Moveclass s);
int main(void)
{
    Moveclass obj1{100};
    display_Moveclass(obj1);    
    return 0;
}

void display_Moveclass(Moveclass s)
{
    cout<<s.get_data()<<endl;
}