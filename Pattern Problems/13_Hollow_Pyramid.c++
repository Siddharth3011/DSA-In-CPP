#include<iostream>

using namespace std;

int main(){
   int a;
      cout<<"Enter the numbers of star you wanna print: ";
      cin>>a;
    
      for (int i = 1; i <= a; i++)
      {
        for (int j = 0; j < 2*(a-i); j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*i-1; k++)
        {
            if (k==0 || k==2*i-2 || i == a)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<"\n";
        
        
      }
      
}
 
 