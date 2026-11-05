//iss question mein hame binary se decimals mein numbers ko convert krna hai, ex: 101 -> 5

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

//iss question mein concept ye hai ki ham hr characters ko multiply krte hai 2 ke badhte hue power se ex: 110 => 2^0*0 + 2^1*1 + 2^2*1 => 0+2+4 => 6
//to hmne yahan pehle characters ko alg kr store kiya hai variable l mein fir res mein uss character ko power se multiply kiya hai. yahan power aise heen badh raha hai jaise 2 ka power badh raha tha, 2^0 =>1, 2^1 => 2, 2^2 => 4 .....
//so uss pow se multiply krenge agle line mein power ko 2 se multiply krenge aur fir n jo number given hai uske last character ko hta denge