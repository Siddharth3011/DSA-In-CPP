#include<bits/stdc++.h>
using namespace std;

void swap_max_min(int arr[], int n){
    int maxi = INT_MIN, mini = INT_MAX;

    for(int i=0; i<n; i++){
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
    int idx1=0, idx2 = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==maxi){
            idx1 = i;
        }
        if(arr[i]==mini){
            idx2 = i;
        }
    }
    swap(arr[idx1], arr[idx2]);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int sz = sizeof(arr)/sizeof(arr[0]);
    swap_max_min(arr, sz);
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}