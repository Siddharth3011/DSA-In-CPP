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

//iss question mein hme maxmum water kis container mein stores hoga means kin 2 index values ke bich mein store hoga. means iske liye hame 2 chize chahiye ek to width jo hme index ki differences se milega aur dusra height.
//aab container mein jo water hai wo min height pr depend krta hai na ki bde wale pr. kyuki container mein utna heen pani store kiya jaa skta hai jitna container ke ek value ka min number ho. like index- 0, 8 pr 1 aur 7 hai to min height 1 hai.
//to iss question mein ham two-pointer approach use krenge aur min height nikalenge.
//aab hame min height pta lgani padegi ki wo kya hoga jis se maximum water store kiya jaa ske. iske liye ham height nikal lenge dono right wale aur left wale values ko compare kr.
//lekin two-pointer approach to max times sorted array mein use hota hai jis se ham l ko badhate hai aur r ko km krta hai.
//to yahan ham wahi min height wala concept use krenge.
//ham yahan right wale value aur left wale value ko compare kr lenge agr l chhota hoga hoga to use badha denge agr r chhota hoga to use kam kr denge is se jo new index values aayegi uske min height ko fir w se multipliy kr conpare krenge ki aab maximum water stored kya nikal raha hai.