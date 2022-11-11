#include <iostream>
#include <string>

using namespace std;
class Deep{
private:
    int *data;
public:
    void set_data_value(int d){
        *data = d;
    }
    int get_data(void){
        return *data;
    }
    //constructor
    Deep(int d);
    //Copy constructor
    /* Deep copy constructor  */
    Deep(const Deep &source);
    //Destructor
    ~Deep();
};

Deep::Deep(int d){
    data = new int;
    *data = d;
    cout<<"Constructor"<<endl;
}

Deep::Deep(const Deep &source)
{
    /* Copy in the arguments are also working fine in this deep constructor */
    /*Instead of copying in the function declaration, now copy is done inside the function*/
    data = new int;
    *data = *source.data;
    cout<<"Copy Constructor - Deep copy"<<endl;
}

Deep::~Deep(){
    delete data;
    cout<<"Desctructor freeing data" <<endl;
}

void display_Deep(Deep s){
    cout<<s.get_data()<<endl;
}

int main(){
    /* First the Constructor is called, then the copy Constructor */
    Deep obj1{100};
    /* Each copy will have a pointer to a unique storage in heap */
    display_Deep(obj1);
    /* Deep copy when we have a raw pointer as a raw data member */

    Deep obj2{20};
    obj2.set_data_value(1000);
    display_Deep(obj2);

    return 0;
}