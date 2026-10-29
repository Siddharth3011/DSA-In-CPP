#include <bits/stdc++.h>
using namespace std;

int majority(vector<int>res){
    int n = res.size();
    int count = 0, maj=0;
    for(int i=0; i<n; i++){
        if(count==0){
            maj = res[i];
        }
        else if(maj==res[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return maj;
}

int main(){
    vector<int>res = {1,2,2,1,1};
    cout<<majority(res)<<endl;
}