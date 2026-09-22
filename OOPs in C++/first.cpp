#include <iostream>
#include <string>
using namespace std;
//this whole is an example of encapsulation as we decalare some data like name, dept, subject etc and a member function like: changeDept so these both are wrapped in a single unit or class Teacher so it is encapsulation.
class Teacher{
    //here we use access modifier: private, public, protected
private:    //this is also get understand as data hiding in encapsulation as we are hiding the salary using private access modifier
    double salary;

public:
    //properties or attributes
    string name;
    string dept;
    string subject;

    
    //methods: function heen hai bas class ke andr likh hai isliye ise kbhi kbhar member functions bhi bol dete hain
    void changeDept(string newDept){
        dept = newDept;
    }

    //but if we want to access salary we can use setter and getter method by creating function:
    void setSalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;
    t1.name = "Sid";
    t1.dept = "Computer";
    t1.subject = "C++";
    // t1.salary = 25000;  you can not access the salary as it is private member
    t1.setSalary(25000);

    cout<<"t1.name"<<endl;
    cout<<t1.getSalary()<<endl;

    return 0;
}