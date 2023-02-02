/**
 * @file 07_EarlyBinding.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Binding refers to the process that is used to convert identifiers (such as variable and function names) into addresses. Although binding is used for both variables and functions,
 *           in this lesson we’re going to focus on function binding.
 * @version 1
 * @date 31-01-2023
 * 
 * Copyright (c) 2023 @balaji303
 * 
 */

// Most of the function calls the compiler encounters will be direct function calls. 
//  A direct function call is a statement that directly calls a function. 

#include <iostream>
#include <stdint.h>
#include <string.h>
using namespace std;

int Add_Function(int var1, int var2);
int Sub_Function(int var1, int var2);
int Mul_Function(int var1, int var2);

int main(void)
{
    int operant1, operant2;
    int operatorVariable;
    int result=0;
    bool isInputValid = true;
    cout<<"Enter a Variable:";
    cin>>operant1;
    cout<<"Enter another Variable:";
    cin>>operant2;
    cout<<"Enter\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n";
    cin>>operatorVariable;
    switch (operatorVariable)
    {
        case 1:
            /* code */
            result = Add_Function(operant1,operant2);
            break;

        case 2:
            /* code */
            result = Sub_Function(operant1,operant2);
            break;

        case 3:
            /* code */
            result = Mul_Function(operant1,operant2);
            break;    

        default:
            cout<<"Invalid Input.\nEnter valid inputs\n";
            isInputValid = false;
            break;
    }

    if(isInputValid != false)
    {
        cout<<"The result is: "<<result;
    }

    return 0;
}

/**
 * @brief Returns the addition of 2 variables
 * 
 * @param var1 
 * @param var2 
 * @return int 
 */
int Add_Function(int var1, int var2)
{
    return (int)(var1 + var2);
}

/**
 * @brief Returns the subtraction of 2 variables
 * 
 * @param var1 
 * @param var2 
 * @return int 
 */
int Sub_Function(int var1, int var2)
{
    return (int)(var1 - var2);
}

/**
 * @brief Returns the multiplication of 2 variables
 * 
 * @param var1 
 * @param var2 
 * @return int 
 */
int Mul_Function(int var1, int var2)
{
    return (int)(var1 * var2);
}