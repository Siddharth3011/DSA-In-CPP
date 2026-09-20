//This code is for all the types = lowercase+uppercse.
//The numbers can cause difficulty as they stored upto 10^9 but chars doesn't because they can be max 256only.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    //precompute
    int hash[256] = {0};
    for(int i = 0; i<s.size(); i++){
        hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
    return 0;
}
