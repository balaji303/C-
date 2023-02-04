/**
 * Get a list of integers from users
 * 
 * If the user enters
 * 
 * P - Print the integers
 * A - Add the integers
 * M - Display the mean of numbers
 * S - Display the Smallest number
 * L - Display the largest number
 * Q - Quit
 *  
 * If Illegal display unknown selection please try again and display the Menu again
 * 
 * 
 * P - Print the list inside square bracket
 * A - They can add a interger and display "5 Added"
 * M - Calulate the mean of the list
 * S - Smallest in the list
 * L - Largest in the list
 * Q - Quit the list and Display GoodBye
 * 
*/
#include <iostream>
#include <vector>
using namespace std;
void menu_print(void);
int main(void){
    vector <int> list;
    int  temp,Max_Element;
    bool terminate = false;
    char user_choose;
    cout<<"Welcome to List service"<<endl<<"Enter the Max Number of list elements"<<endl;
    cin>>Max_Element;
    for (int i = 0; i < Max_Element; i++)
    {
            cout<<"\nEnter "<<++i<<" element:";
            cin>>temp;
            list.push_back(temp);
            i--;
    }
    //Menu Loop starts
    while (terminate == false){
    menu_print();
    cin>>user_choose;
    if(user_choose == 'P' || user_choose == 'p'){
        cout<<"Prints\n";
        cout<<"[ ";
        for (int i = 0; i < Max_Element; i++)
        {
            if (i == (Max_Element-1))
            {
                cout<<list[i];
            }
            else
            {
                cout<<list[i]<<",";
            }
        }
        cout<<" ]";
        terminate = false;
        }
    else if (user_choose == 'Q'|| user_choose == 'q')
    {
            cout<<"Good Bye!";
            terminate = true;
    }
    else if (user_choose == 'A'|| user_choose == 'a')
    {
            int temp_add;
            cout<<"Enter a Number to add to the list: ";
            cin>>temp_add;
            list.push_back(temp_add);
            Max_Element++;
            cout<<"Number Added\n";
            terminate = false;
    }
    else if (user_choose == 'M'|| user_choose == 'm')
    {
        int  sum=0,mean;
        for (int i = 0; i < Max_Element; i++)
        {
                sum = sum+ list[i];
        }
            mean = sum/Max_Element; 
            cout<<"Mean of the list is: "<<mean;
            terminate = false;
    }
    else if (user_choose == 'S'|| user_choose == 's')
    {
            int small_Element = list[0];
            cout<<"The Smallest Number of the list is: ";
            for(int i=1;i<Max_Element;i++){
                if(small_Element > list[i]){
                        small_Element = list[i];
                }
                else{
                //Do Nothing
                }
            }
            cout<<small_Element;
            terminate = false;
    }
    else if (user_choose == 'L'|| user_choose == 'l')
    {
            int large_Element = list[0];
            cout<<"The Largest Number of the list is: ";
            for(int i=1;i<Max_Element;i++){
                if(large_Element < list[i]){
                        large_Element = list[i];
                }
                else{
                //Do Nothing
                }
            }
            cout<<large_Element;
            terminate = false;
    }
    else{
            cout<<"You have entered a wrong choose\n";
            terminate = false;
        }
    }
    return 0;
}
void menu_print(void){
        cout<<"\nEnter your choose\nP - Print the integers\nA - Add the integers\nM - Display the mean of numbers\nS - Display the Smallest number\nL - Display the largest number\nQ - Quit"<<endl;
}
