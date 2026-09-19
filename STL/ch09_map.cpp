#include<iostream>
#include<map>

using namespace std;

int main(){
map<int, string> m; // this is ordered list map so it print values in an ordered way.

m[0] = "hello";
m[19] = "good";
m[3] = "World";

m.insert({5, "sid"});

cout<<"Before erase: "<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}cout<<endl;

cout<<"Is 19 present: "<<m.count(19)<<endl;

cout<<"After erase: "<<endl;
// m.erase(19);
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}cout<<endl;

auto it = m.find(5);
for(auto i=it; i!=m.end(); i++){
    cout<<(*i).first<<endl;
}

}

