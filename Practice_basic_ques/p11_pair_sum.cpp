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