#include <iostream>

using namespace std;
void func_lval(int &l_val);
void func_rval(int &&r_val);
int main(void)
{
    int x{100};
    cout<<"X value: "<<x<<endl;
    int &l_ref = x;
    cout<<"l_ref value: "<<l_ref<<endl;
    l_ref = 3000;
    cout<<"l_ref value: "<<l_ref<<endl;
    // int &&r_ref = x;//Compile error
    int &&r_ref = 200;
    cout<<"r_ref value: "<<r_ref<<endl;
    r_ref = x;
    cout<<"r_ref value: "<<r_ref<<endl;
    
    /* Function Play */
    func_lval(x);
    // func_lval(200);//Compile error
    func_rval(200);
    // func_rval(x);//Compile error
    return 0;
}
void func_lval(int &l_val)
{
    cout<<"Func: l_val: "<<l_val<<endl;
}
void func_rval(int &&r_val)
{
    cout<<"Func: r_val: "<<r_val<<endl;
}