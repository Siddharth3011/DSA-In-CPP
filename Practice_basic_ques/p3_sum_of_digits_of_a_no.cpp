//iss question mein hame ek numbers ke each characters ko add krna hai like 123 ke 1+2+3 = 6

#include<bits/stdc++.h>
using namespace std;

int SumOfDigits(int n){
    int sum=0;
    while (n>0)
    {
        int digit = n%10;
        sum += digit;
        n = n/10;
    }
    return sum;
}

int main(){
    cout<<"sum= "<<SumOfDigits(245)<<endl;
    return 0;
}

//isme hmne pehle hr characters ko store krayenge uske liye modulo(%) ka use krenge. fir jo digit aayega use sum mein add kr denge, aur last mein fir ham n ko update kr denge.