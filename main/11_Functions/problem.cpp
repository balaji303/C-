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
inline void menu_print(void);
char get_ip(void);
bool handle_prints(vector <int> &vec, int &Max_Value);
bool handle_quit(void);
inline void print_quit(void);
bool handle_add(vector <int> &vec, int &Max_Vale);
bool handle_mean(vector <int> &vec, int &Max_vale);
bool handle_small(vector <int> &vec, int &MaxVal);
bool handle_large(vector <int> &vec, int &Max_val);

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
    user_choose = get_ip();
    if(user_choose == 'P' || user_choose == 'p'){
        terminate = handle_prints(list,Max_Element);
    }
    else if (user_choose == 'Q'|| user_choose == 'q')
    {
        terminate = handle_quit();
    }
    else if (user_choose == 'A'|| user_choose == 'a')
    {
        terminate = handle_add(list,Max_Element);
    }
    else if (user_choose == 'M'|| user_choose == 'm')
    {
        terminate = handle_mean(list,Max_Element);
    }
    else if (user_choose == 'S'|| user_choose == 's')
    {
        terminate = handle_small(list,Max_Element);
    }
    else if (user_choose == 'L'|| user_choose == 'l')
    {
            terminate = handle_large(list,Max_Element);
    }
    else{
            cout<<"You have entered a wrong choose\n";
            terminate = false;
        }
    }
    return 0;
}
inline void menu_print(void){        cout<<"\nEnter your choose\nP - Print the integers\nA - Add the integers\nM - Display the mean of numbers\nS - Display the Smallest number\nL - Display the largest number\nQ - Quit"<<endl;}

char get_ip(void){
        char user_ip;
        cin>>user_ip;
        return user_ip;
}
bool handle_prints(vector <int> &vec, int &Max_Value){
        cout<<"Prints\n";
        cout<<"[ ";
        for (int i = 0; i < Max_Value; i++)
        {
            if (i == (Max_Value-1))
            {
            cout<<vec[i];
            }
            else{
            cout<<vec[i]<<",";
            }
        }
        cout<<" ]";
        return false;
}

bool handle_quit(void){
        print_quit();
        return true;
}
/**
 * Prints "Good Bye!" in the terminal
 * 
 * Argument: void
 * 
 * Return Type: void
 * 
*/
inline void print_quit(void){cout<<"Good Bye!";}

bool handle_add(vector <int> &vec, int &Max_Vale){
        int temp_add;
        cout<<"Enter a Number to add to the list: ";
        cin>>temp_add;
        vec.push_back(temp_add);
        Max_Vale++;
        cout<<"Number Added\n";
        return false;
}

bool handle_mean(vector <int> &vec, int &Max_vale){
        int  sum=0,mean;
        for (int i = 0; i < Max_vale; i++)
        {
                sum = sum + vec[i];
        }
        mean = sum/Max_vale; 
        cout<<"Mean of the list is: "<<mean;
        return false;
}

bool handle_small(vector <int> &vec, int &MaxVal){
        int small_Element = vec[0];
        cout<<"The Smallest Number of the list is: ";
        for(int i=1;i<MaxVal;i++){
           if(small_Element > vec[i]){
               small_Element = vec[i];
        }
        else{
             //Do Nothing
           }
        }
        cout<<small_Element;
        return false;
}

bool handle_large(vector <int> &vec, int &Max_val){
        int large_Element = vec[0];
        cout<<"The Largest Number of the list is: ";
        for(int i=1;i<Max_val;i++){
          if(large_Element < vec[i])
             {
             large_Element = vec[i];
             }
         else{
            //Do Nothing
             }
        }
        cout<<large_Element;
        return false;
}