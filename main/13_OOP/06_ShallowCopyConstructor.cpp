#include <iostream>
#include <string>

using namespace std;
class Shallow{
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
    Shallow(int d);
    //Copy constructor
    /* Shallow copy constructor is the default copy constructor */
    Shallow(const Shallow &source);
    //Destructor
    ~Shallow();
};

Shallow::Shallow(int d){
    data = new int;
    *data = d;
    cout<<"Constructor"<<endl;
}

Shallow::Shallow(const Shallow &source)
    :data(source.data){
        cout<<"Copy Constructor - shallow copy"<<endl;
}

Shallow::~Shallow(){
    delete data;
    cout<<"Desctructor freeing data" <<endl;
}

void display_shallow(Shallow s){
    cout<<s.get_data()<<endl;
}

int main(){
    /* First the Constructor is called, then the copy Constructor */
    Shallow obj1{100};
    /* If there is no copy Constructor,the default Constructor alone is getting called */
    display_shallow(obj1);
    /* In Shallow copy only the pointer is copied NOT what it points to */

    Shallow obj2{20};
    obj2.set_data_value(1000);
    display_shallow(obj2);

    return 0;
}