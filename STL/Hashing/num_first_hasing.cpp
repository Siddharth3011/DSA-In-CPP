//hasing if given numbers are countable like 13,20,50....etc.
//As an array can contain only 10^6 elememts nd 10^7 if declared globally. 
//For the enter values like: 10^9, we use division method using linklist.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //precompute
    int hash[13] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<endl;
    }
    return 0;
}