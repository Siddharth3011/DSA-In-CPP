#include<iostream>

using namespace std;

int main(){
   int a;
      cout<<"Enter the numbers of star you wanna print: ";
      cin>>a;
      
      for (int i = 1; i <= a; i++)
      {
          for (int j = 0; j < a-i; j++)
          {
              cout<<" ";
           }


        int n=1;
        for (int k = 1; k <=i ; k++)
        {
            cout<<n<<" ";
            n = n*(i-k)/k;
        }
        cout<<"\n";
        
        
    }
    
    
}
 
 