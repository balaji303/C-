/**
 * @file 01_InheritClass.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Explains about class and its inheritance
 * @version 1
 * @date 18-01-2023
 * 
 * Copyright (c) 2023 @balaji303
 * 
 */
#include <iostream>
#include <stdint.h>
using namespace std;

class Human
{
public:
    string humanName;
    uint32_t humanAge;

    //Constructor
    Human(string name,uint32_t age);
    uint32_t getHumanAge(void);
};

Human::Human(string name="",uint32_t age = 18):humanName{name},humanAge{age}
{
    cout<<"CONSTRUCTOR CALLED FOR HUMAN\n";
}

uint32_t Human::getHumanAge(void)
{
    return humanAge;
}
//Cricket Class is inherited from the Human class
class Cricket:public Human
{
public:
    uint32_t cricketRuns;
    uint32_t cricketWickets;

    //Constructor
    Cricket(uint32_t matchRuns, uint32_t matchWickets);
};

Cricket::Cricket(uint32_t matchRuns=0, uint32_t matchWickets=0):cricketRuns{matchRuns},cricketWickets{matchWickets}
{
    cout<<"Constructor Called for cricket\n";
}

//Employee class is inheited from the Human class
class Employee:public Human
{
public:
    uint32_t EmployeeID;
    bool employeeIsWFH; //Is Working from Home

    //constructor
    Employee(uint32_t id_number, bool employee_wfh );
};

Employee::Employee(uint32_t id_number, bool employee_wfh):EmployeeID{id_number},employeeIsWFH{employee_wfh}
{
    cout<<"Constructor called from Employee\n";
}

//Components is a inherited class of Employee
// class Components:public Employee
// {
// public:
//     uint8_t NoOfLaptop;
//     uint8_t NoOfMonitor;
//     uint16_t TotalNoOfComponents;

//     //Constructors
//     friend ComponentsFrd(uint8_t laptop,uint8_t monitor);
//     uint16_t getTotalComponents(void);
// };

// ComponentsFrd(uint8_t laptop,uint8_t monitor):NoOfLaptop{laptop},NoOfMonitor{monitor}
// { Todo: Error occurs here
//     cout<<"Constructor called from COMPONENTS\n";
// }

// uint16_t Components::getTotalComponents(void)
// {
//     return (NoOfLaptop+NoOfMonitor);
// }

int main(void)
{
    Cricket dhoni{};
    Employee balaji{100,true};
    // Components chennai{10,3};
    //If its ordinary class humanName is not detected here
    dhoni.humanName="MSD";
    dhoni.cricketRuns = 32000;
    //Cricket can access Human class
    cout<<"Age:"<<dhoni.getHumanAge()<<endl;
    cout<<"Name:"<<dhoni.humanName<<endl;
    cout<<"Runs:"<<dhoni.cricketRuns<<endl;
    cout<<"Wickets:"<<dhoni.cricketWickets<<endl;
    cout<<"Employee"<<endl;
    cout<<"id_number:"<<balaji.EmployeeID<<endl;
    cout<<"employee_wfh:"<<balaji.employeeIsWFH<<endl;
    //Employee ca't access Components
    //cout<<"Totoal Components:"<<balaji.getTotalComponents();
    return 0;
}