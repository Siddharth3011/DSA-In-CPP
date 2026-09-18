#include <iostream>
using namespace std;

int main(){

    int a,b;
       //Array:

   //1d Array:

   int arr[5] = {1,2,3,4,5};
      cout<<arr[3]<<endl;
   
      int marks[6];
      for (int i = 0; i < 6; i++)
      {
           cout<<"Enters the marks: ";
           cin>>marks[i];
      }
      for (int i = 0; i < 6; i++)
      {
          cout<<marks[i]<<endl;
      }
   
      //2d Array:
      int arr2d[2][3] = {
       {1,2,3}, {6,7,8}
      };
      for (int i = 0; i < 2; i++)
      {
           for (int j = 0; j < 3; j++)
           {
               cout<<"The value at "<<i<<"and "<<j<<"is: "<<arr2d[i][j]<<endl;
           }
           
      }
   
   
      for (int i = 0; i < 2; i++)
      {
           for (int j = 0; j < 3; j++)
           {
               cin>>a,b;
           }
           
      }
}