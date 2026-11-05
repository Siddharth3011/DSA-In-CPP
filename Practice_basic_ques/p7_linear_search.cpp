//ye to ek easy question hai jisme hme linearly pure array mein search kr bs ek element ko find krna hai

#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int k){
    int res = -1;
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            res = i;
        }
    }
    return res;
}

int main(){
    int arr[] = {1, 3, 5, 7, 9};
    int sz =  sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    cout<< linear_search(arr, sz, k)<<endl;
}

//isme bs ek loop chla do n tk aur jb wo element mil jaye to return kr do. 
//bs size kaise nikalna hai aur function call practice krne ke liye ye question kiya gya hai