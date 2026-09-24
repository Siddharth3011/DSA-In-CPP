#include<iostream>

using namespace std;

int main(){
   int a;
      cout<<"Enter the numbers of star you wanna print: ";
      cin>>a;
    
      for (int i = 1; i <= a; i++)
      {
        for (int k = 0; k < i; k++)
        {
            cout<<"* ";
        }
        for (int j = 0; j <= 2*(a-i)-3; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < i; k++)
        {
            cout<<"* ";
        }
        cout<<"\n";
        
      }
      
}
 
 