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
    Shallow(const Shallow &source);
    //Destructor
    ~Shallow();
};

Shallow::Shallow(int d){
    data = new int;
    *data = d;
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
    Shallow obj1{100};
    display_shallow(obj1);

    Shallow obj2{20};
    obj2.set_data_value(1000);

    return 0;
}