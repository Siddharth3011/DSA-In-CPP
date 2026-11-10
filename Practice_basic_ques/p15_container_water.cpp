//iss question mein hame uss container ka pta lgana hai jo max water hold kr rakhega. means ek array diya hoga aur hme 2 aise index wale number lene hai jinki beech ka difference multiply by dono mein se min height krne pr sbse bda number aaye
//ex: {1, 8, 6, 2, 5, 4, 8, 3, 7} => iska answer 1, 8 index wale number honge unke kyuki index ke bich ka difference 8-1=7 hai aur min value 8 aur 7 mein 7 hai.
//so 7*7 = 49ans

#include<bits/stdc++.h>
using namespace std;

int max_water(vector<int>vec){
    int n = vec.size();
    int l = 0, r = n-1;
    int maxi = INT_MIN;
    while(l<r){
        int w = r-l;
        int ht = min(vec[l], vec[r]);
        int water = w*ht;
        maxi = max(maxi,  water);
        if(vec[r]<vec[l]){
            r--;
        }
        else{
            l++;
        }
    }
    return maxi;
}

int main(){
    vector<int>vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout<<max_water(vec)<<endl;
}

//