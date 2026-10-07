#include<bits/stdc++.h>
using namespace std;

int maxvalue(vector<int>arr, int n){
    int res = INT_MIN;
    int cur = 0;
    for(int i: arr){
        cur += i;
        res = max(res, cur);
        if(cur<0){  //we are writing this if statement after the res because of a testcase where all values in the vectors are negative like: {-1, -2, -3, -4, -5};
            cur = 0;
        }
    }
    return res;
}

int main(){
    vector<int>arr = {3, -4, 5, 4, -1, 7, -8};
    int n = arr.size();
    cout<< maxvalue(arr, n)<<endl;

}