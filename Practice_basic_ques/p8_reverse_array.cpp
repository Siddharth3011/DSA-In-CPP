//iss question mein hme given array ko reverse krna hai

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

//isme concept ye hai ki ham two pointer approach lgayenge aur jb tk hmara right wala value bda hai aur equal hai tb tk aar[l] aur arr[r] ko swap krte rahenge.
//ise direct built in funtion ka use kr bhi kiya jaa skta hai: reverse(arr, arr+n) aur vector ke liye reverse(vec.begin(), vec.end()).