#include<iostream>

using namespace std;

int main(){
   int a;
      cout<<"Enter the numbers of star you wanna print: ";
      cin>>a;
      int n = 1;
    
      for (int i = 1; i <= a; i++)
      {
        for (int j = 0; j < i; j++)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<"\n";
         
      }
      
}
 
 