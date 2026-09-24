#include<iostream>

using namespace std;

int main(){
   int a;
      cout<<"Enter the numbers of star you wanna print: ";
      cin>>a;
    
      for (int i = 0; i < a; i++)
      {
        for (int j = 0; j < a; j++)
        {
            if (i > 0 && i < a- 1 && j > 0 && j < a - 1) 
            {
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
            
        }
        cout<<"\n";
      }
      
    //   For Numbers: 

    for (int i = 0; i < a; i++)
    {
      for (int j = 1; j <= a; j++)
      {
          if (i > 0 && i < a- 1 && j > 1 && j < a) 
          {
              cout<<"  ";
          }
          else{
              cout<<j<<" ";
          }
          
      }
      cout<<"\n";
    }

    // For Alphabets: 

    for (int i = 0; i < a; i++)
    {
      for (int j = 0; j < a; j++)
      {
          if (i > 0 && i < a- 1 && j > 0 && j < a-1) 
          {
              cout<<"  ";
          }
          else{
              cout<<char('A'+j)<<" ";
          }
          
      }
      cout<<"\n";
    }
}
 
 