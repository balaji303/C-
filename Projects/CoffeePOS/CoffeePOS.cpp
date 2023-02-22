#include "ApplicationLayer.h"
#include "CoffeePOS.h"


void LogPrint(CoffeePOS &CoffeePOSClass)
{
    cout<<"*************************************"<<endl;
    cout<<"**Printing your order:***************"<<endl;
    cout<<"**Coffee Type:"<<GetCoffeeType(CoffeePOSClass)<<"***************"<<endl;
    cout<<"**Coffee Size:"<<GetCoffeeSize(CoffeePOSClass)<<"***************"<<endl;
    cout<<"**Coffee State:"<<GetCoffeeState(CoffeePOSClass)<<"***************"<<endl;
    cout<<"**Sugar Type:"<<GetSugarType(CoffeePOSClass)<<"***************"<<endl;
    cout<<"**Sugar Percentage:"<<GetSugarPercent(CoffeePOSClass)<<"***************"<<endl;
}