// #include <iostream>
// #include "ApplicationLayer.h"
// #include "CoffeePOS.h"
// #include <stdint.h>
// using namespace std;

// #include "CoffeePOS.h"
#include <iostream>
#include <stdint.h>
using namespace std;

#include "ApplicationLayer.h"

void WelcomeScreen(void)
{
    cout<<"*************************************"<<endl;
    cout<<"**************WELCOME****************"<<endl;
    cout<<"****************to*******************"<<endl;
    cout<<"**********koFFee Kingston************"<<endl;
    cout<<"*************************************"<<endl;
    cout<<"************Press any key************"<<endl;
    cout<<"*************************************"<<endl;
    cin.ignore();// Ignore the read input
}

void EndScreen( uint32_t printPrice )
{
    cout<<"*************************************"<<endl;
    cout<<"Your Total Price is:"<<endl;
    cout<<"                   ₹"<<printPrice<<endl;
    cout<<"*************************************"<<endl;
    cout<<"*************Thank You***************"<<endl;
    cout<<"*************For Using***************"<<endl;
    cout<<"**********koFFee Kingston************"<<endl;
    cout<<"*************************************"<<endl;
}

bool ValidateCustomerInput(uint32_t customerInput, uint32_t maxValueAccepted)
{
    if (customerInput > maxValueAccepted)
    {
        return INVALID_CUSTOMER_INPUT;
    }
    else
    {
        return VALID_CUSTOMER_INPUT;
    }
}