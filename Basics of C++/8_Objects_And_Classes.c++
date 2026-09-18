#include <iostream>

using namespace std;

class Employee{
    public:
      string name;
      int salary;

      Employee(string n, int s, int s_p){ // ye isliye bnai gyi hai taki jb bhi meri class run kre to ek function bhi sath-sath run kr jaye.
        this->name = n;
        this->salary = s;
        this->secretPassword = s_p;
      }
      void printDetails(){
        cout<<"The name of our first employee is "<<this->name<<" and his salary is: "<<this->salary<<" Dollars"<<endl;
      }
      void getSecretPassword(){
        cout<<"The Secret password of the employ is: "<<this->secretPassword<<endl;
      }

private:
      int secretPassword;
};

//inheritence: 

class Programme : public Employee
{
    public:
        int errors;
};

int main(){


    Employee emp("Siddharth",1000,3223);
    // emp.name = "Siddharth";
    // emp.salary = 100;
    emp.printDetails();
    // cout<<emp.secretPassword<<endl; // it gives an error because it can't access the private values
    emp.getSecretPassword(); //but this can give the correct value because it is called before in the class as a method.

}
