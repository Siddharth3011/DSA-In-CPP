//iss question mein hme btana tha ki kon sa number prime hai ya nhi

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 14;
    bool isprime = true;
    for(int i=2; i*i<n; i++){
        if(n%i==0){
            isprime = false;
            break;
        }
    }

    if(isprime){
        cout<<"Prime";
    }
    else{
        cout<<"Not-prime";
    }
}

//uske liye hmne logic lgaya ki:
//ham ek variable declare krenge jo true heen rahega, fir ek loop lgayanege check krne ke aur i ko n tk chla kr check kr lenge niche ka logic lga kr, lekin fir hmne socha ki usko aur optimize kiya jaa skta hai like: ham given number ka root nikal len aur fir loop ko wahi tk chalaye. lekin loop nikalna code mein successful nhi hai to hmne i ko square kr diya.
//aur fir ham jo if loop la condition wahi tk full-fill ho gyea to prime nhi hoga agr nhi hua to prime hoga.
//ex: n = 25 hai to loop i=2 se start hoga lekin chalega lekin condition check hoga i*i wala means 4 check hoga(4<25), fir i=3 ke liye i*i=> 9<25, fir 4 ke liye 16<25. aur agla i=5 ke liye loop fail ho jayega kyuki 25<25 ho jata hai.
//to loop 2->4 tk heen chla 24 tk nhi. 