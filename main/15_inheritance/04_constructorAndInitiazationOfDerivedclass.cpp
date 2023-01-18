/**
 * @file 04_constructorAndInitiazationOfDerivedclass.cpp
 * @author @balaji303
 * @brief  Create a class a with one variable,drive another class b from class a with one variable,
 *          from the main function initialize those two variables, with single function. 
 * @version 0.1
 * @date 2022-12-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <stdint.h>
#include <string.h>
using namespace std;

class Person
{
private:
    uint8_t personAge;
public:
    //Constructor
    Person(uint8_t argAge);
};

/// @brief Constructor for class Person that assigns argument's value to the class's member function
/// @param argAge 
Person::Person(uint8_t argAge):personAge{argAge}
{
    cout<<"Person's constructor called\n";
}


class Employee:public Person
{
private:
    uint16_t employeeId;
public:
    //Constructor
    Employee(uint16_t argEmployeeId, uint8_t argAge);
};

//Assigning value for Person.Age using the constructor
Employee::Employee(uint16_t argEmployeeId, uint8_t argAge):employeeId{argEmployeeId},Person{argAge}
{
    cout<<"Employee's construction called\n";
}

int main(void)
{
   Employee balaji{1234,22};
   return 0; 
}