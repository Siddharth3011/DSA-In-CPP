#include<bits/stdc++.h>
using namespace std;

int d_to_b(int n){
    int res=0;
    int pow=1;
    while(n>0){
        int rem = n%2;
        res += rem*pow;
        n = n/2;
        pow = pow*10;
    }
    return res;
}
int main(){
    cout<< d_to_b(50) <<endl;
}