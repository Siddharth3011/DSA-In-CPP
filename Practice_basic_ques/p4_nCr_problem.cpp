//here we have to calculate all the combinations means finding the number of ways of selecting items from a collection, such that the order of selection does not matter.

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    factorial(n);
    factorial(r);
    factorial(n-r);

    return factorial(n)/(factorial(r) * factorial(n-r));
}

int main(){
    int n = 8, r = 2;
    cout<<nCr(n, r)<<endl;
}

//the formula of nCr is n!/r!*(n-r)! , lekin isko direct nhi nikala jaa skta ya hr baar factorial nikalne ki jarurat bhi nhi hai, ek factorial function bna kr usme factorial caluculate kr lenge aur fir use heen call kr denge waise heen formula place kr.