#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int k){
    int res = -1;
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            res = i;
        }
    }
    return res;
}

int main(){
    int arr[] = {1, 3, 5, 7, 9};
    int sz =  sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    cout<< linear_search(arr, sz, k)<<endl;
}