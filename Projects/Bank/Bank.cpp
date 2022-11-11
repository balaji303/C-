/* Banking Software using Cpp
 * 
 *
 * Requirement
 * 
 * Basic
 * [] A UI using Switch case
 * [] A Class with private members as bank's detail
 * [] A class with public members to access the bank details
 * [] Bank number to be 10 digit generated using random function
 * 
 * Advanced
 * [] Banker alone can change the private details 2ed time
 * [] Banker alone can delete the account
 * 
 *  */

/* Include Headers */
#include <iostream>
#include <stdint.h>
#include <string.h>

/* Macros */
#define MAX_NUM_ACCOUNT 100
#define PROCESS_DONE    1       //Success
#define PROCESS_PENDING 0       //Failure

/* Namespace std */
using namespace std;

/* Class Definition */
class Bahubali
{
private:
    /* data */
    uint32_t  AccountNumber;
    string AccountHolderName;
    uint32_t  AccountBalance;
    uint32_t  AccountCredit;
public:
    /* Constructor */
    Bahubali(void);
    /* Distructor */
    ~Bahubali();
    /* Function to set Account Number */
    void setAccountNumber(void)
    {
        AccountNumber = rand() % 100 + 1917000;
    }
    uint32_t getAccountNumber(void)
    {
        return AccountNumber;
    }

    /* Function to set Account Holder Name */
    void setAccountHolderName(string customerName)
    {
        AccountHolderName = customerName;
    }
    /* Function to get Account Holder Name */
    string getAccountHolderName(void)
    {
        return AccountHolderName;
    }
    
    /* Function to set Account Balance */
    void setAccountBalance(uint32_t customerBalance)
    {
        AccountBalance = customerBalance;
    }
    /* Function to get Account Balance */
    uint32_t getAccountBalance(void)
    {
        return AccountBalance;
    }

    /* Function to set Account Credit */
    void setAccountCredit(uint32_t customerCredit)
    {
        // strcpy(AccountHolderName, customerName);
        AccountCredit = customerCredit;
    }
    /* Function to get Account Credit */
    uint32_t getAccountCredit(void)
    {
        return AccountCredit;
    }
};

Bahubali::Bahubali(void)
{
    // cout<<"\t$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
    // cout<<"\t$$$$$   Opening   $$$$$"<<endl;
    // cout<<"\t$$$$$ 100% Secured$$$$$"<<endl;
    // cout<<"\t$$$$$  Bahubali   $$$$$"<<endl;
    // cout<<"\t$$$$$$$$$$$$$$$$$$$$$$$\n"<<endl;
}

Bahubali::~Bahubali()
{
    cout<<"\t$$$$$$$$$$$$$$$$$$$$$$$Destructor"<<endl;
    // cout<<"\t$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
    // cout<<"\t$$$$$  Thanks You $$$$$"<<endl;
    // cout<<"\t$$$$$  for using  $$$$$"<<endl;
    // cout<<"\t$$$$$   Bahubali  $$$$$"<<endl;
    // cout<<"\t$$$$$$$$$$$$$$$$$$$$$$$\n"<<endl;
}


/* Function Declaration */
void initPrints(void);
bool menuOption(void);
bool creatAccount(Bahubali *Balaji);
bool deleteAccount(Bahubali *Balaji);
bool allAccountDetails(void);
bool accountStatement(Bahubali *Balaji);
Bahubali BalajiBank[MAX_NUM_ACCOUNT];
uint8_t numberOfAccount = 0;
int main(void)
{
    /* Welcome Banner */
    initPrints();
    while(1)
    {
        menuOption();
    }
    return 0;
}

/* Function Definition */

/// @brief Welcome Banner
/// @param void
void initPrints(void)
{
    cout<<"\t$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
    cout<<"\t$$$$$   Welcome   $$$$$"<<endl;
    cout<<"\t$$$$$      to     $$$$$"<<endl;
    cout<<"\t$$$$$ Balaji Bank $$$$$"<<endl;
    cout<<"\t$$$$$$$$$$$$$$$$$$$$$$$\n\n"<<endl;
}

/// @brief Creates account and gets initial account balance
/// @param Pointer to the class
bool creatAccount(Bahubali *Balaji)
{
    uint32_t accountNum;
    uint32_t accountBalance;
    uint32_t accountCredit;
    string userName;
    (*Balaji).setAccountNumber();
    accountNum = (*Balaji).getAccountNumber();
    cout<<"Account Number: "<<accountNum<<endl;

    cout<<"Enter Account Holder Name:";
    cin>>userName;
    (*Balaji).setAccountHolderName(userName);
    cout<<"Saved Name: "<<(*Balaji).getAccountHolderName()<<endl;

    cout<<"Enter Account Balance:";
    cin>>accountBalance;
    (*Balaji).setAccountBalance(accountBalance);
    cout<<"Account Balance: "<<(*Balaji).getAccountBalance()<<endl;

    cout<<"Enter Loan Amount:";
    cin>>accountCredit;
    (*Balaji).setAccountCredit(accountCredit);
    cout<<"Credit Amount: "<<(*Balaji).getAccountCredit()<<endl;

    return PROCESS_DONE;
}

bool menuOption(void)
{
    uint16_t userChoice; //Switch works only from 16_t
    bool processStatus;
    cout<<"\t 1.Create Account"<<endl;
    cout<<"\t 2.Account Statement"<<endl;
    cout<<"\t 3.All Account Details"<<endl;
    cout<<"\t 4.Delete Account"<<endl;
    // cout<<"\t 5.Exit"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>userChoice;
    cout<<"user Choice "<<userChoice<<endl;
    switch (userChoice)
    {
        case 1:
            cout<<"Creating an Account..."<<endl;
            numberOfAccount++;
            processStatus = creatAccount(&BalajiBank[numberOfAccount]);
            if(!processStatus) cout<<"Process Failed"<<endl;
            break;
        case 2:
            cout<<"Account Statement..."<<endl;
            processStatus = accountStatement(&BalajiBank[numberOfAccount]);
            if(!processStatus) cout<<"Process Failed"<<endl;
            break;
        case 3:
            cout<<"All Account Details..."<<endl;
            processStatus = allAccountDetails();
            if(!processStatus) cout<<"Process Failed"<<endl;
            break;
        case 4:
            cout<<"Delete Account..."<<endl;
            processStatus = deleteAccount(&BalajiBank[numberOfAccount]);
            if(!processStatus) cout<<"Process Failed"<<endl;
            break;
        case 5:
            return 0;
        default:
            cout<<"Default"<<endl;
            break;
    }
}

/// @brief Calls the Destructor for the class
/// @param Pointer to the class
bool deleteAccount(Bahubali *Balaji)
{
    (*Balaji).~Bahubali();
    return PROCESS_DONE;
}

/// @brief Welcome Banner
/// @param maxNumberOfAccount
bool allAccountDetails(void)
{
    cout<<"|-S.NO-|-Acc.Number-|-Holder Name-|-Balance-|-Credit-|"<<endl;
    for(int i=1;i<=numberOfAccount;i++)
    {
        cout<<"|---"<<i<<"--|---"<<(BalajiBank[i].getAccountNumber())<<"--|----"<<(BalajiBank[i].getAccountHolderName())
        <<"----|-----"<<(BalajiBank[i].getAccountBalance())<<"-----|----"<<(BalajiBank[i].getAccountCredit())<<"---|"<<endl;
    }
    return PROCESS_DONE;
}

/// @brief Welcome Banner
/// @param Pointer to the class
bool accountStatement(Bahubali *Balaji)
{
    cout<<"Name        : "<<((*Balaji).getAccountHolderName())<<endl;
    cout<<"Acc. Number : "<<((*Balaji).getAccountNumber())<<endl;
    cout<<"Balance     : "<<((*Balaji).getAccountBalance())<<endl;
    cout<<"Credit      : "<<((*Balaji).getAccountCredit())<<endl;
    return PROCESS_DONE;
}

