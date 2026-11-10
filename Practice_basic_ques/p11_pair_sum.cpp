//iss question hme sorted array given hoga aur iss mein hme find krna hai ki pure array mein se kis do index wali value ko add krne se target value achieve hoti hai.

#include <bits/stdc++.h>
using namespace std;

vector<int> pair_sum(vector<int>res, int tar){
    int n = res.size();
    vector<int>ans;
    int l = 0, r = n-1;
    while(l<r){
        int sum = res[l]+res[r];
        if(tar==sum){
            ans.push_back(l);
            ans.push_back(r);
            return ans;
        }
        else if(tar<sum){
            r--;
        }
        else{
            l++;
        }
    }
    return ans;
}

int main(){
    vector<int>res = {2,7,8,15,18};
    int target = 9;
    vector<int>ans = pair_sum(res, target);
    cout<<ans[0]<<","<<ans[1]<<endl;
}

//iss question ke liye hmne two-pointer approach lgaya hai jiske liye hmne 2 variables decalre kiye hai: l aur r jisme first aur last index stored hai.
//fir sum naam ka ek variable declare kiya hai jisme ham dono index wali value ko add krte hai. 
//agr sum ki value target se bdi hogi to r ko km krenge agr chhoti hogi to left ko bhadhayenge.
//aur agr tar ki value res ke baraber hui to dono index ko store kr lenge. aur print kra lenge