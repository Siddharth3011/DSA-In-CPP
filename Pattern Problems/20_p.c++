#include<bits/stdc++.h>
using namespace std;

void getpermu(vector<int>&arr, int idx, vector<vector<int>>&res){
    int n = arr.size();

    if(idx==n){
        res.push_back(arr);
        return;
    }

    for(int i=idx; i<n; i++){
        swap(arr[idx], arr[i]);
        getpermu(arr, idx+1, res);

        swap(arr[idx], arr[i]);
    }
}

int main(){
    vector<int>arr = {1,2,3};
    vector<vector<int>>res;
    getpermu(arr, 0, res);
    
    return res;
}