//iss question mein hme product btana hai pure array ka sivay self index ka. 
//means agr 4 values hai to 0 index pr 1,2,3 wale index value ka product ho, 1 pr 0, 2, 3, 4 wale index values ka product ho.
//ex: {1, 2, 3, 4} => {24, 12, 8, 6}

#include<bits/stdc++.h>
using namespace std;

vector<int>prod_of_arr(vector<int>vec){
    int n = vec.size();
    vector<int>ans(n,1);
    int prefix = 1;
    for(int i=1; i<n; i++){
        ans[i] = ans[i]*prefix; 
        prefix = vec[i]*prefix; 
    }
    int suffix = 1;
    for(int i=n-1; i>=0; i--){
        ans[i]=ans[i]*suffix;
        suffix = vec[i]*suffix;
    }

    return ans;
}

int main(){
    vector<int>vec = {1,2,3,4};
    for(int i:prod_of_arr(vec)){
        cout<<i<<" ";
    }
}

//iss problem ko solve krne ke liye ham division rule ka use kr skte hai like sare index values ka product nikalo aur fir hr ek index alue se divide kr store kr lo, is se self wali value kt jayegi. lekin kayi jegah without division operation likha hota hai to wahan hme dusra method lgana hoga.
//to ham yahan prefix aur suffix ka istemal krenge ham uss particular index ke pehle ki value jo prefix hai unhe multiply kr lenge aur jo uss index value ke baad ke numbers hai wo suffix honge unka product nikal lenge aur akhir mein dono prefix aur suffix ko multiply krenge to hme uss index value ko chhod baki ke sare values ke product mil jayega.
//iske liye ham ek nya vector lenge jisme apna answer store krenge uss pure vector ko ham 1 se initialize krenge. kyuki hme produxt nikalna hai
//fir 2 loop chalayenge jb prefix wala loop chlayenge to pehla index wali value ko 1 heen rehne denge fir jb suffix nikalenge tb last wali value ko nhi chendenge.
//to aab first loop mein pehla index value to 1 heen rahega aur loop second index se start hoga aab hme sari index value pr jo bhi unke prefix hai unka product store krna hai iske liye jo nya vector hai ans usme ham current prefix se multiply krte rahegne aur fir prefix ko vec wale vector ke index value se multiply kr update krte rahenge. inn sb ke baad hme jo milega wo: {1, 1, 2, 6} aayega jo ki hr index value like vector: {1, 2, 3, 4} mein 0th index ka prefix to hai nhi to 1 heen rahega 1th index ka prefix 1 hai to wahan bhi 1 rahega 2nd index ka prefix 1*2 hoga to wahan 2 aa jayega similarlt 3rd index wali value pr prefix: 1*2*3 = 6 hoga.
//aab 2nd loop mein hr index value ka suffix nikal uske sath multiply krte chalenge initially jo hmara last value use nhi chedna hai to hmne suffix ko 1 heen liya hai, fir ans ko suffix se multiply krte rahenge aur current suffix nikalte rahenge vec ke index values se multilpy kr, jaisa hmen prefix ke sath kiya tha waisa heen same kaam hai bas loop ulta chl raha hai
//jiske baad hme: {24, 12, 8, 6} apna answer mil jayega.