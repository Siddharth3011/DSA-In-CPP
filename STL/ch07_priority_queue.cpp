#include<iostream>
#include<queue>

using namespace std;

int main(){

    // max heap:
    priority_queue<int>maxi;

    // min-heap:
    priority_queue<int,vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(5);
    
    // int n = maxi.size();
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<maxi.top()<<" "<<endl;
    //     maxi.pop();   
    // }
    
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(5);
    
    int size = mini.size();

    for (int i = 0; i < size; i++)
    {
        cout<<mini.top()<<endl;
        mini.pop();
    }

    cout<<"Queue is empty or not: "<<mini.empty()<<endl;
    
}