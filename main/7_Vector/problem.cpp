/**
 * 
 * Problem #1
 * [x]Declare a empty int vector and add 10 at 1st position
 * 
 * Problem #2
 * [x]Declare a empty char vector and add x at 1st position
 * 
 * Problem #3
 * [ ]Declare a empty 2D vector and add 2 vector to it.
 * [ ]Display them
 * [ ]Change vector1.at(0) to 1000
 * [ ]Display them
 * 
 * Use https://www.onlinegdb.com/ to run if there is any issues in this file
 * 
*/
#include <iostream>
#include <vector>
using namespace std;
int main(void){
//Problem #1 Starts
/*
vector <int> int_vector{0};
cout<< "Size of Int Vector:"<<int_vector.size()<<endl;
int_vector.push_back(10);
cout<< "The 1st element is "<<int_vector.at(1)<<endl;
cout<< "Size of Int Vector:"<<int_vector.size()<<endl;
*/
//Problem #1 Ends
//Problem #2 Starts
/*
vector <char> char_vec={'a'};
cout<<"Size of char vector:"<<char_vec.size()<<endl;
char_vec.push_back('x');
cout<<"The last element is "<<char_vec[1]<<endl;
cout<<"Size of char vector:"<<char_vec.size()<<endl;
char_vec.pop_back();
cout<<"Size of char vector:"<<char_vec.size()<<endl;
*/
//Problem #2 Ends
//Problem #3 Starts
vector <vector <int>> twoD_array={
    {1,2,3,4},
    {5,6,7,8}
};
vector <int> add_vect;
int temp_variable;
twoD_array[0][1] = 1000;
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cout<<"The element at row: "<<i<<" and col: "<<j<<" = "<<twoD_array[i][j]<<endl;
    }
}
for (int i = 0; i < 4; i++)
{
    cout<<"Enter "<<i<< "element ";
    cin>>temp_variable;
    add_vect.push_back(temp_variable);
}
twoD_array.push_back(add_vect);
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cout<<"The element at row: "<<i<<" and col: "<<j<<" = "<<twoD_array[i][j]<<endl;
    }
}
cout<<twoD_array.at(0).at(1);
//Problem #3 Ends
return 0;
}