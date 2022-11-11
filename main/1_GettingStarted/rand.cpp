#include <iostream>
#include <stdlib.h>     /* srand, rand */
using namespace std;

int main()
{
    int v2;
    v2 = srand() % 100 + 1917000;
    cout<<"Rand "<<v2;
    return 0;
}