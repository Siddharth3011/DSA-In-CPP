#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" "<<endl;
    }
    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" "<<endl;
    // }
    // cout<<endl;

    cout<<"Print First Index Element: "<<d.at(1)<<endl;

    cout<<"Front "<<d.front()<<endl;
    cout<<"End "<<d.back()<<endl;

    cout<<"Empty or not: "<<d.empty()<<endl; 

    cout<<"Before Stress "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"after stress "<<d.size()<<endl;
    for(int i: d){
        cout<<i<<endl;
    }
} 