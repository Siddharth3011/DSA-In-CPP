#include<iostream>

using namespace std;

int main(){
    int a;
    cout<<"Enter the numbers of star you wanna print: ";
    cin>>a;

    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j <2*(a-i); j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < a; k++)
        {
            cout<<"* ";
        }
        
        cout<<"\n";
        
    }
    
}