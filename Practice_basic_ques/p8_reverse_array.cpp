#include<bits/stdc++.h>
using namespace std;

void reverse_arr(int arr[], int n){
    int l = 0, r = n-1;
    while(r>=l){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int sz = sizeof(arr)/sizeof(arr[0]);
    reverse_arr(arr, sz);
    for(int i=0; i<sz; i++){
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}