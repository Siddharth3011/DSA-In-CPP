//iss question mein hme max gain btana hai means ham jb stock buy kre aur fir use sell kre to max difference aaye

#include<bits/stdc++.h>
using namespace std;

// int max_gain(vector<int>vec){
//     int n = vec.size();
//     int a = INT_MAX;
//     int b = 0;
//     for(int i=0; i<n; i++){
//         if(vec[i]<a){
//             a = vec[i];
//         }
//         else if((vec[i]-a)>b){
//             b = vec[i]-a;
//         }
//     }
//     return b;
// }


//iss question mein hme max profit nikalna hai jo stocks bech kr mila hoga, uske liye hme stock ko pehle buy krna hoga aur fir sell krna hoga. lekin sell kuch aise krna hoga ki jis price pr buy kiya gya hai uss se jyada price mein sell kiya jaye taki profit nikle, fir unme se heen jo max profit niklega wahi answer hoga.
//iske liye hmara pehla method yahi hai ki ham buy wali price ko nikal len, aur kosis krenge ki buy wali price kam se kam ho. to ham use hr next wali value se compare krenge.
//aur agr jo next value hai wo jyada hai hmare buy wale se to ham use buy wale price se minus kr lenge jis se hame profit mil jayega. isi profit ko ham agle profit se compare krte rahenge aur atlast hme hmara final answer mil jayega.

/***************************************************** OR *************************************************************** */

int max_gain(vector<int>vec){
    int n = vec.size();
    int maxi = 0, best = vec[0];
    for(int i=0; i<n; i++){
        if(best<vec[i]){
            maxi = max(maxi, vec[i]-best);
        }
        best = min(best, vec[i]);
    }
    return maxi;
}

int main(){
    vector<int>vec = {7, 1, 5, 3, 6, 4};
    cout<<max_gain(vec)<<endl;
}


//iss wale method mein ham wahi same heen kaam kr rahe hai but thoda different tarike se, built-in methods ka use kr, isme ham initially to first element ko store kr lenge fir use heen he element se compare krenge agr wo chhota hoga to use fir ham profit nikal lenge aur pichle profit se compare kr lenge.
//agr best bda hua to ham use update kr denge minimum value se.