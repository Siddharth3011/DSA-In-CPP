#include <iostream>

using namespace std;

int main(){
        // Conditional statements: 

        int age;
        cout<<"Enter your age: ";
        cin>>age;
        if(age>150 || age<1){
            cout<<"Invalid age"<<endl;
        }
        else if(age>18){
            cout<<"You can vote"<<endl;
        }
        else{
            cout<<"You can't vote"<<endl;
        }
    
        switch (age)
        {
        case 12:
            cout<<"You are 12 years old"<<endl;
            break;
    
        case 18:
            cout<<"You are 18 years old"<<endl;
            break;
        
        default:
            cout<<"You are neither 12 nor 18"<<endl; 
            break;
        }
}