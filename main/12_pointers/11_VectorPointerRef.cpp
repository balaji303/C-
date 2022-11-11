#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main(void){
    vector<string> names {"aaa","bbb","ccc"};
    cout<<names.at(1)<<endl;
    // for (auto fun: names)
    //     fun = "xxx";s
    for (auto print:names)
        cout<<print;
    return 0;
}