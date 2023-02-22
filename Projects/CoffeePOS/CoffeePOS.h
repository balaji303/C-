#ifndef COFFEE_POS
#define COFFEE_POS

// #include <iostream>
// using namespace std;

/**********COFFEE CLASS*********/
#define HOT_COFFEE 1
#define COLD_COFFEE 0

typedef enum
{
    americano = 1,
    cappuccino,
    espresso,
    latte,
    mocha
}Coffee_Type_t;

// Todo: Add Extra Large
typedef enum
{
    small = 1,
    medium,
    large
}Coffee_Size_t;

/**********END OF COFFEE CLASS*********/

/**********SUGAR CLASS*********/

typedef enum
{
    noSugar = 0,
    brownSugar,
    whiteSugar,
    mapleSyrup
}SugarType_t;

typedef float SugarPercentage_t;

/**********END OF SUGAR CLASS*********/

/**********EXTRA CLASS*********/
// TODO almond, banana, gems topping
/**********END OF EXTRA CLASS*********/

/**********ECO CLASS*********/
// Todo OWN, Paper, pot, biscut cup
/**********END OF ECO CLASS*********/

class CoffeePOS
{
private:
    Coffee_Type_t coffeeSelected;
    Coffee_Size_t coffeeSizeSelected;
    bool coffeeState;
    SugarType_t sugarTypeSelected;
    SugarPercentage_t sugarPercent;
public:
    CoffeePOS(void);
    bool GetCustomerInput(void);
    Coffee_Type_t SetCoffeeType(void);
    Coffee_Size_t SetCoffeeSize(void);
    bool SetCoffeeState(void);
    SugarType_t SetSugarType(void);
    SugarPercentage_t SetSugarPercent(void);
    //Gets
    friend Coffee_Type_t GetCoffeeType(CoffeePOS &CoffeePOSClass);
    friend Coffee_Size_t GetCoffeeSize(CoffeePOS &CoffeePOSClass);
    friend bool GetCoffeeState(CoffeePOS &CoffeePOSClass);
    friend SugarType_t GetSugarType(CoffeePOS &CoffeePOSClass);
    friend SugarPercentage_t GetSugarPercent(CoffeePOS &CoffeePOSClass);
};

CoffeePOS::CoffeePOS(void)
{
    // cout<<"Constructor is called"<<endl;
}

bool CoffeePOS::GetCustomerInput(void)
{
    cout<<"SetCustomerInput called"<<endl;
    // coffee Selected;
    CoffeePOS::SetCoffeeType();
    // coffee size
    CoffeePOS::SetCoffeeSize();
    // Coffee State
    CoffeePOS::SetCoffeeState();
    // Sugar Type
    CoffeePOS::SetSugarType();
    //Sugar Percent
    CoffeePOS::SetSugarPercent();
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
    cout<<"                        1.Hot Coffee"<<endl;
    cout<<"                        2.Cold Coffee"<<endl;
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

Coffee_Type_t GetCoffeeType(CoffeePOS &CoffeePOSClass)
{
    return CoffeePOSClass.coffeeSelected;
}

Coffee_Size_t GetCoffeeSize(CoffeePOS &CoffeePOSClass)
{
    return CoffeePOSClass.coffeeSizeSelected;
}

bool GetCoffeeState(CoffeePOS &CoffeePOSClass)
{
    return CoffeePOSClass.coffeeState;
}

SugarType_t GetSugarType(CoffeePOS &CoffeePOSClass)
{
    return CoffeePOSClass.sugarTypeSelected;
}

SugarPercentage_t GetSugarPercent(CoffeePOS &CoffeePOSClass)
{
    return CoffeePOSClass.sugarPercent;
}

void LogPrint(CoffeePOS &CoffeePOSClass);
#endif