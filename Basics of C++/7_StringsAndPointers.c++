#include<iostream>
#include<string>
using namespace std;

int main(){
       //String:
        string name = "Siddharth";
      cout<<"The name is: "<<name<<endl;
      cout<<"The length of name is: "<<name.length()<<endl;
      cout<<"The part of name is: "<<name.substr(0,3)<<endl;
      cout<<"The part of name is: "<<name.substr(2,3);
   
      // pointers:
      int l = 34;
      int* ptrl;
      ptrl = &l;
   
      cout<<"The value of l is: "<<l<<endl;
      cout<<"The value of l is: "<<*ptrl<<endl;
      cout<<"The address of l is: "<<ptrl<<endl;
      cout<<"The address of l is: "<<&l<<endl;

      return 0;
}