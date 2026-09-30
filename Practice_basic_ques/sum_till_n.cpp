#include<bits/stdc++.h>
using namespace std;

int addTillNo(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    cout<< addTillNo(5) <<endl;
}   