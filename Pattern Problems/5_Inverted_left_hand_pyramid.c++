#include <iostream>

using namespace std;

int main(){
    int a;
    cout<<"Enter the numbers of star you wanna print: ";
    cin>>a;
 
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 2*i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < a-i; k++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

    // For Numbers:

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 2*i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= a-i; k++)
        {
            cout<<k<<" ";
        }
        cout<<"\n";
    }

    // For Alphabets:

    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 2*i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < a-i; k++)
        {
            cout<<char('A'+k)<<" ";
        }
        cout<<"\n";
    }


    
}