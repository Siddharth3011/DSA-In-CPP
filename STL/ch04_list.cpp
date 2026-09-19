#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    list<int>n(5,100);
    cout<<"Printing n: "<<endl;
    for(int i: n){
        cout<<i<<endl;
    }


    // cout<<"Printing l: "<<endl;
    // for(int i:l){
    //     cout<<i<<" "<<endl;
    // }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" "<<endl;
    }

    cout<<"Size of list: "<<l.size()<<endl;
}