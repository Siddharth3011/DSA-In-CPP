//iss question mein ham decimal number ko binary mein convert krna hai, means 5 -> 101

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

//yahan hme decimal ko binary mein convert krna hai aur ek number ko binary mein convert krne ke liye sb se acha operation hai % aur / ka.  %2 se number ka bit character nikalta hai aur /2 se aage ke bits pr pahucha jaata hai.
//ex:  for number 5 -> 5%2 = 1 fir 5/2 -> 2 means 2-> 10 to 5 ke 101 se ham 2 ke 10 pr aa gye means 101 -> 10 ho gya. aab fir jb 2%2 -> 0, fir 2/2 -> 1 to 101->10->1 means bit aage badhte gye aur modulo se 101 mil bhi jayega.
//to wahi operation hmne use kra hai yahan, %2 se hr bit ka pta lgate hai fir res mein use power ke multiple kr add kr dete hai aur /2 se ek bit aage badh jate hai, aur hr iteration se pow ki value badhti chli jati hai.