/**
 * @file 08_LateBinding.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Late Biding using function pointers
 * @version 1
 * @date 02-02-2023
 * 
 * Copyright (c) 2023 @balaji303
 * 
 */
// In some programs, the function being called can’t be resolved until runtime. 
//  In C++, this is sometimes known as late binding (or in the case of virtual function resolution,
//  dynamic binding).
#include <iostream>
using namespace std;

int Add_Function(int variable1, int variable2);
int Subtraction_Function(int variable1, int variable2);
int Multiply_Function(int variable1, int variable2);

int main(void)
{
    int operant1, operant2, operatorVariable;
    cout<<"Enter operand1:";
    cin>>operant1;
    cout<<"Enter operand2:";
    cin>>operant2;
    cout<<"Enter\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n";
    cin>>operatorVariable;
    int (*FunctionPointer)(int x,int y)
    {
        nullptr
    };
    switch (operatorVariable)
    {
        case 1:
            FunctionPointer = Add_Function;
            break;
        
        case 2:
            FunctionPointer = Subtraction_Function;
            break;

        case 3:
            FunctionPointer = Multiply_Function;
            break;
    }
    cout<<"The result is "<<FunctionPointer(operant1, operant2);
    return 0;
}

int Add_Function(int variable1, int variable2)
{
    return (variable1 + variable2);
}

int Subtraction_Function(int variable1, int variable2)
{
    return (variable1 - variable2);
}

int Multiply_Function(int variable1, int variable2)
{
    return (variable1 * variable2);
}