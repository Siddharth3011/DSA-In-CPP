#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t,sum=0,r=0;
cin>>t;
while (t--){
    int n;
    cin>>n;
    int a[n];
    if(n==1){
        cout<<"-1";
    }
    for(int i = 0; i<n-1; i++){
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++){
        sum = a[i]+a[i+1];
    }
    int r = 0-sum;
    a[0] = r;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    
}
}
