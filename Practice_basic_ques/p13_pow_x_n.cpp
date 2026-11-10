//iss question mein hme kisi number ke powers ko calculate krna hai. means x^n ex: 2^3 => 8

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
    int n = 5;
    cout<<myPow(x, n)<<endl;
}

//iss question mein ham simply jitan power diya hoga utni baar loop lga kr bs multiply kr output nikal skte the lekin, uski wajah se loop O(n) time run hota to isko aur optimize krne ke liye ham jo power hai uss pr loop na lga kr uski binary value pr loop lgate hai.
//uske liye ham wahi %2 aur /2 wala operation use krenge. %2 se hme bits milenge aur /2 se ham ek-ek bit aage badhenge.
//to ham hr baar values ko multily krenge aur ek bit aage badhte chle jayenge. aur agr %2 krne pr 1 aayega to ham ans mein cur ko store kr denge.
//ex: 2^5 hai to bin = 5, cur = 2 aur 5 ka binary hota ha 101.
//to hr baar cur mein 2 multiply hota jayega aur power ko km krte chle jayenge
//1st loop=> 5%2 == 1, ans = 2, cur = 4, bin = 2
//2nd loop=> 2%2 == 0, ans = 2, cur = 16, bin = 1
//3rd loop=> 1%2 == 1, ans = 2*16 = 32, cur = 256, bin = 0

//yahan code approx half times chlta hai normal wale se jiske wajah se calculation O(logn) mein ho jata hai