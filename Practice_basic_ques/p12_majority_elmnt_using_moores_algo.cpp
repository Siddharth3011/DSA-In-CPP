//iss question mein hme majority element find krne hai, means kon sa element array mein jyada times appear hua hai

#include <bits/stdc++.h>
using namespace std;

int majority(vector<int>res){
    int n = res.size();
    int count = 0, maj=0;
    for(int i=0; i<n; i++){
        if(count==0){
            maj = res[i];
        }
        else if(maj==res[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return maj;
}

int main(){
    vector<int>res = {1,2,2,1,1};
    cout<<majority(res)<<endl;
}

//iss question mein ham moores's algo use krenge moore's algo sbse jyada optimized tarika hai majoruty element ko find krne ka ek array mein.
//moore's algo btata hai ki majority element wahi hoga jo n/2 number se jyada times aayega pure array mein.
//uske liye ham elements ke counts ko increase krte hai iss basis pr ki jo value hmne store kri hai, maj wo agle index mein stored value ke equal hai ya nhi agr equal hoti hai to ham count ko bdhate hai nhi to km krte hai.
//aur agr count zero ho gya to nya jo number aaya hai use maj mein store kra denge.
//at last jo value maj mein bachi reh gyi means uska count zero nhi hua aur wahi maj element hai.