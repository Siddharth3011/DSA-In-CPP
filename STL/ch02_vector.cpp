#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    vector<int> a(5,1); // 5 is for intialising the size of the array as 5 and the 1 is the value initialise at starting.
    cout<<"print a: "<<endl;
    for(int i:a){
        cout<<i<<endl;
    }

    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    cout<<"Element at second index: "<<v.at(2)<<endl;

    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }

    cout<<"Before clear size: "<<v.size()<<endl;
    cout<<"After clear size: "<<v.size()<<endl;
    
}