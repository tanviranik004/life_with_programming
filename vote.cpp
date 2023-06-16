#include<iostream>
using namespace std;
int main()

{
    int myAge;
    int votingAge=18;
    
    cout<<"Enter your Age : ";
    cin>> myAge;

    if (myAge>=votingAge){
        cout << "old is enough to vote";
    }

    else{
        cout<<"old is not enough to vote";
    }

    return 0;


}