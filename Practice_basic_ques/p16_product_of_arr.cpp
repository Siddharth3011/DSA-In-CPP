#include <bits/stdc++.h>
using namespace std;

vector<int> prod_of_arr(const vector<int>& vec) {
    int n = vec.size();
    vector<int> ans(n, 1);

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        ans[i] *= prefix;
        prefix *= vec[i];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= vec[i];
    }

    return ans;
}

int main() {
    vector<int> vec = {1, 2, 3, 4};
    vector<int> result = prod_of_arr(vec);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}