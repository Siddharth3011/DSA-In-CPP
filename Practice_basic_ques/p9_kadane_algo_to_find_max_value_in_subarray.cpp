//hme yahan ek aisa subarray dhudhna hai jis ke sare elements ko jb ham add kre to max value aaye

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

//iss question mein ham kadagane algo lgayenege, ye algo sbse effiecient tarika hai kisi bhi max subarray wale question ko solve krne 
//isme ham sbhi elements ko one-by-one jodte hai aur res se compare krte hai jo max hota hai use store kr dete hai.
//agr sum less than 0 hota hai to ham cur ko 0 kr dete hai. agr nhi hota to ham subarray ko extend kr aur elements jodte chle jate hai.
//is se max sum of elements res mein store ho jata hai aur akhr mein wahi return kr dete hai