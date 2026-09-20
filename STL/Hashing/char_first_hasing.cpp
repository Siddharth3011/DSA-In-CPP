//this code is for lowercase or uppercase alphabets only not for both.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    //precompute
    int hash[26] = {0};
    for(int i = 0; i<s.size(); i++){
        hash[s[i]-'a']++; //for uppercase: hash[s[i]-'A']++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl; //for uppercase: hash[c-'A'];
    }
    return 0;
}
