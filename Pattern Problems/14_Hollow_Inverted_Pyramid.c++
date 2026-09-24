#include<iostream>

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
        for (int k = 2*(a-i)-1; k > 0; k--)
        {
            if (i==a-1 || i == 0 || k==1 || k== 2*(a-i)-1)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
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
        for (int k = 1; k <= 2*(a-i)-1; k++)
        {
            if (i==a-1 || i == 0 || k==1 || k== 2*(a-i)-1)
            {
                cout<<k<<" ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<"\n";
      }

      //For Alphabets: 

      for (int i = 0; i < a; i++)
      {
        for (int j = 0; j < 2*i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*(a-i)-1; k++)
        {
            if (i==a-1 || i == 0 || k==0 || k== 2*(a-i)-2)
            {
                cout<<char('A'+k)<<" ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<"\n";
      }
      
}
 
 