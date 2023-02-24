#ifndef COFFEE_POS
#define COFFEE_POS

// #include <iostream>
// using namespace std;

/**********COFFEE CLASS*********/
#define HOT_COFFEE 0
#define COLD_COFFEE 1

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
    friend Coffee_Type_t GetCoffeeType(CoffeePOS CoffeePOSClass);
    friend Coffee_Size_t GetCoffeeSize(CoffeePOS CoffeePOSClass);
    friend bool GetCoffeeState(CoffeePOS CoffeePOSClass);
    friend SugarType_t GetSugarType(CoffeePOS CoffeePOSClass);
    friend SugarPercentage_t GetSugarPercent(CoffeePOS CoffeePOSClass);
};

uint32_t LogPrint(CoffeePOS CoffeePOSClass);
#endif