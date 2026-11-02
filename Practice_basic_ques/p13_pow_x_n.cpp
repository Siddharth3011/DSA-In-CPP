#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
    long long binN = n;
    if(binN<0){
        x = 1/x;
        binN = -binN;
    }
    long double ans = 1;
    long double cur = x;
    while(binN>0){
        if(binN%2==1){
            ans *= cur;
        }
        cur *= cur;
        binN /= 2;
    }
    return (double)ans;
}

int main(){
    double x = 2;
    int n = 10;
    cout<<myPow(x, n)<<endl;
}