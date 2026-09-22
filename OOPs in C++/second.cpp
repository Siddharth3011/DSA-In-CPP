#include <iostream>
#include <string>
using namespace std;


//Constructor:
    //Same name as class
    //Constructor doesn't have return type not even void
    //Only called once(automatically), at object creation
    //Memory allocation happens when constructor is called


class Teacher{

public:
    //to use constructor we initialize a function with the same name of class. //here we declare dept so we don't have to delcare explicitly the dept it auto fill that part for every object.
    Teacher(){ //Not parametrized constructor
        dept="Computer Science";
    }

    //parametrized constructor:
    Teacher(string s, string n, string d, double sal){
        name=n;
        subject = s;
        dept = d;
        salary = sal;
    }

//In a class you can use multiple types of constructor but all must have different number of parameters like first one is non parametrized having no parameter but second one have 4. This concept is known as constructor overloading


    double salary;
    string name;
    string dept;
    string subject;


    void changeDept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject: "<<subject<<endl;
    }

};

int main(){
    // Teacher t1; //Constructor Call
    // Teacher t2; //Constructor Call
    // t1.name = "Sid";
    // t1.subject = "C++";
    // t1.salary = 25000; 
    // cout<<t1.dept<<endl;
    // cout<<t2.dept<<endl;

    Teacher t1("Sid", "Computer Science", "C++", 25000);
    t1.getInfo();

    return 0;
}