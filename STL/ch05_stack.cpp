#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string>s;
    
    s.push("Hello");
    s.push("Good");
    s.push("World");

    cout<<"Top Element: "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element after pop: "<<s.top()<<endl;

    cout<<"Size of the element: "<<s.size()<<endl; 

    cout<<"Empty or not "<<s.empty()<<endl;
}