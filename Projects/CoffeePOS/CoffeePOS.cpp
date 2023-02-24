// #include "ApplicationLayer.h"
// #include "CoffeePOS.h"

#include <iostream>
#include <stdint.h>
using namespace std;

#include "ApplicationLayer.h"
#include "CoffeePOS.h"

uint32_t LogPrint(CoffeePOS CoffeePOSClass)
{
    Coffee_Type_t customerCoffeeSelected;
    Coffee_Size_t customerCoffeeSizeSelected;
    bool customerCoffeeState;
    SugarType_t customerSugarTypeSelected;
    // SugarPercentage_t customerSugarPercent;
    
    uint32_t coffeePrice;
    

    customerCoffeeSelected = GetCoffeeType(CoffeePOSClass);
    coffeePrice = customerCoffeeSelected * 20; 

    customerCoffeeSizeSelected = GetCoffeeSize(CoffeePOSClass);
    coffeePrice = coffeePrice + (customerCoffeeSizeSelected * 5);

    customerCoffeeState = GetCoffeeState(CoffeePOSClass);

    if (customerCoffeeState == COLD_COFFEE)
    {
        coffeePrice = coffeePrice + 10;
    }
    else
    {
        coffeePrice = coffeePrice + 3;
    }

    customerSugarTypeSelected = GetSugarType(CoffeePOSClass);

    if (customerSugarTypeSelected == mapleSyrup)
    {
        coffeePrice = coffeePrice + 30;
    }
    else if( customerSugarTypeSelected == noSugar)
    {
        // No price for No sugar;
    }
    else
    {
        coffeePrice = coffeePrice + 5;
    }


    cout<<"*************************************"<<endl;
    cout<<"**Printing your order:***************"<<endl;
    cout<<"**Coffee Type:"<<customerCoffeeSelected<<"***************"<<endl;
    cout<<"**Coffee Size:"<<customerCoffeeSizeSelected<<"***************"<<endl;
    cout<<"**Coffee State:"<<customerCoffeeState<<"***************"<<endl;
    cout<<"**Sugar Type:"<<customerSugarTypeSelected<<"***************"<<endl;
    cout<<"**Sugar Percentage:"<<GetSugarPercent(CoffeePOSClass)<<"***************"<<endl;

    return coffeePrice;
}

CoffeePOS::CoffeePOS(void)
{
    // cout<<"Constructor is called"<<endl;
}

bool CoffeePOS::GetCustomerInput(void)
{
    // coffee Selected;
    coffeeSelected = CoffeePOS::SetCoffeeType();
    // coffee size
    coffeeSizeSelected = CoffeePOS::SetCoffeeSize();
    // Coffee State
    coffeeState = CoffeePOS::SetCoffeeState();
    // Sugar Type
    sugarTypeSelected = CoffeePOS::SetSugarType();
    //Sugar Percent
    sugarPercent = CoffeePOS::SetSugarPercent();
    return true;
}

Coffee_Type_t CoffeePOS::SetCoffeeType(void)
{
    uint32_t customerCoffeeType;
    bool isInputValid = false;
    cout<<"Enter Coffee Type Number:"<<endl;
    cout<<"                        1.Americano"<<endl;
    cout<<"                        2.Cappuccino"<<endl;
    cout<<"                        3.Espresso"<<endl;
    cout<<"                        4.Latte"<<endl;
    cout<<"                        5.Mocha"<<endl;
    cin>>customerCoffeeType;
    isInputValid = ValidateCustomerInput(customerCoffeeType,(uint32_t)mocha);
    if (isInputValid == INVALID_CUSTOMER_INPUT)
    {
        cout<<"Inputvalid Input"<<endl;
        cout<<"Selecting recommanded coffee Americano..."<<endl;
        return americano;
    }
    else
    {
        return (Coffee_Type_t)customerCoffeeType;
    }
}

Coffee_Size_t CoffeePOS::SetCoffeeSize(void)
{
    uint32_t customerCoffeeSize;
    bool isInputValid = false;
    cout<<"Enter Coffee Size Number:"<<endl;
    cout<<"                        1.Small"<<endl;
    cout<<"                        2.Medium"<<endl;
    cout<<"                        3.Large"<<endl;
    cin>>customerCoffeeSize;
    isInputValid = ValidateCustomerInput(customerCoffeeSize,(uint32_t)large);
    if (isInputValid == INVALID_CUSTOMER_INPUT)
    {
        cout<<"Inputvalid Input"<<endl;
        cout<<"Selecting recommanded coffee size Small..."<<endl;
        return small;
    }
    else
    {
        return (Coffee_Size_t)customerCoffeeSize;
    }  
}

bool CoffeePOS::SetCoffeeState(void)
{
    uint32_t customerCoffeeState;
    bool isInputValid = false;
    cout<<"Enter Coffee State Number:"<<endl;
    cout<<"                        0.Hot Coffee"<<endl;
    cout<<"                        1.Cold Coffee"<<endl;
    cin>>customerCoffeeState;
    isInputValid = ValidateCustomerInput(customerCoffeeState,(uint32_t)COLD_COFFEE);
    if (isInputValid == INVALID_CUSTOMER_INPUT)
    {
        cout<<"Inputvalid Input"<<endl;
        cout<<"Selecting recommanded coffee state Hot..."<<endl;
        return HOT_COFFEE;
    }
    else
    {
        return (bool)customerCoffeeState;
    }  
}

SugarType_t CoffeePOS::SetSugarType(void)
{
    uint32_t customerSugarType;
    bool isInputValid = false;
    cout<<"Enter Sugar Type Number:"<<endl;
    cout<<"                        0.No Sugar"<<endl;
    cout<<"                        1.BrownSugar"<<endl;
    cout<<"                        2.WhiteSugar"<<endl;
    cout<<"                        3.MapleSyrup"<<endl;
    cin>>customerSugarType;
    isInputValid = ValidateCustomerInput(customerSugarType,(uint32_t)mapleSyrup);
    if (isInputValid == INVALID_CUSTOMER_INPUT)
    {
        cout<<"Inputvalid Input"<<endl;
        cout<<"Selecting recommanded Sugar type WhiteSugar..."<<endl;
        return whiteSugar;
    }
    else
    {
        return (SugarType_t)customerSugarType;
    }  
}

SugarPercentage_t CoffeePOS::SetSugarPercent(void)
{
    uint32_t customerSugaPercent;
    bool isInputValid = false;
    cout<<"Enter Sugar Percent Number:"<<endl;
    cin>>customerSugaPercent;
    isInputValid = ValidateCustomerInput(customerSugaPercent,(uint32_t)100);
    if (isInputValid == INVALID_CUSTOMER_INPUT)
    {
        cout<<"Inputvalid Input"<<endl;
        cout<<"Selecting recommanded Sugar Percentage 50..."<<endl;
        return 50;
    }
    else
    {
        return (SugarPercentage_t)customerSugaPercent;
    }    
}

Coffee_Type_t GetCoffeeType(CoffeePOS CoffeePOSClass)
{
    return CoffeePOSClass.coffeeSelected;
}

Coffee_Size_t GetCoffeeSize(CoffeePOS CoffeePOSClass)
{
    return CoffeePOSClass.coffeeSizeSelected;
}

bool GetCoffeeState(CoffeePOS CoffeePOSClass)
{
    return CoffeePOSClass.coffeeState;
}

SugarType_t GetSugarType(CoffeePOS CoffeePOSClass)
{
    return CoffeePOSClass.sugarTypeSelected;
}

SugarPercentage_t GetSugarPercent(CoffeePOS CoffeePOSClass)
{
    return CoffeePOSClass.sugarPercent;
}
