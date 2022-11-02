//  Use https://www.onlinegdb.com/ to run if there is any issues in this file
#include <iostream>
#include <vector>
using namespace std;
int main(void){
    vector <char> vowels{'a','e','i','o','u'};
    vector <int> score{0};
    int score_to_add;
    cout<<vowels[0]<<endl; //Array Syntax
    cout<<vowels.at(4)<<endl; //Vector Syntax
    cout<<"Size of this vector is: "<<vowels.size()<<endl;
    cout<<"The score size is "<<score.size()<<endl;
    cout<<"Enter the number to Push into score";
    cin>>score_to_add;
    score.push_back(score_to_add);
    cout<<"The score size is "<<score.size()<<endl;
    cout<<score.at(0);
    cout<<endl<<score.at(1);
    return 0;
}

/*

   vector <int> arr {1,2,3};
    arr.push_back(4);
    cout<<"The second element:"<<arr[1]<<endl;
 
*/