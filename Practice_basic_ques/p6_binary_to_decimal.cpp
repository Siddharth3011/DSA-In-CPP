#include<bits/stdc++.h>
using namespace std;

int b_to_d(int n){
    int pow = 1, res =0;
    while(n>0){
        int l = n%10;
        res += l*pow;
        pow = pow*2;
        n = n/10;
    }
    return res;
}

int main(){
    cout<<b_to_d(101)<<endl;
    return 0;
}