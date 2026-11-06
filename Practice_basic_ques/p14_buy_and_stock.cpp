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

