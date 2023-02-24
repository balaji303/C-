/**
 * @file main.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Coffee Shop - POS machine software using cpp based on terminal
 * @version 1
 * @date 17-02-2023
 * 
 * Copyright (c) 2023 @balaji303
 * 
 */

/**
Output0:
Welcome screen

input0:
Enter to open

output1:
Coffee - Type
            - Latte
            - Mocha
            - Cappuccino
            - Americano
            - Espresso
       - Size
            - Small
            - Medium
            - Large
       - State
            - Hot
            - Cold
Sugar  - SugarType
            - BrownSugar
            - WhiteSugar
            - Maple Syrup
            - No Sugar
       - Percentage
            - Number less than 100
Extra  - Topping
            - Almond
            - Banana
            - Hazlenut
Cup    - Cup
            - Own cup
            - Price based on size

Input:
    customer choice

Output:
- Price

Input2:
- Place Your cup

Output2:
- Filling the cup
- Prints ThankYou

*/
#include <iostream>
#include <stdint.h>
#include <string.h>
#include <cstdlib>
using namespace std;
#include "ApplicationLayer.h"
#include "CoffeePOS.h"

// using namespace std;

int main(void)
{
     CoffeePOS customer[100];
     uint32_t customerCount = 1;
     uint32_t price = 0;
     while(1)
     {
          WelcomeScreen();
          customer[customerCount].GetCustomerInput();
          price = LogPrint(customer[customerCount]);
          EndScreen(price);
          customerCount++;
     }
     return 0;
}
