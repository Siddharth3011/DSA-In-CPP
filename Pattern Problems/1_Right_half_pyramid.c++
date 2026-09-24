#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the numbers of star you wanna print: ";
    cin>>a;

    //For Stars: 

    for (int i = 1; i <= a; i++)
    {      
        for (int j = 0; j <i ; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

    //For Numbers:

    for (int i = 1; i <= a; i++)
    {      
        for (int j = 1; j <=i ; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    
    //For Alphabets:

    for (int i = 1; i <= a; i++)
    {      
        for (int j = 0; j <i ; j++)
        {
            cout<<char('A'+j)<<" ";
        }
        cout<<"\n";
    }

}