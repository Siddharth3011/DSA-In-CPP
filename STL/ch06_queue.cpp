#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string>q;

    q.push("S");
    q.push("i");
    q.push("d");

    cout<<"First Element: "<<q.front()<<endl;

    q.pop();

    cout<<"First Element: "<<q.front()<<endl;

    cout<<"Size of queue after pop: "<<q.size()<<endl;
}