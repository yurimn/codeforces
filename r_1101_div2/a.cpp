//
// Created by Yurim on 2026. 5. 30..
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i=0;i<n;i++) cin>>v[i];

        ranges::sort(v);
        int k = v[n/2];
        if (k == v[0] || k == v[n-1]) cout << n-ranges::count(v,v[n/2]) << '\n';
        else cout << (n-ranges::count(v, v[n/2])+1)/2 << '\n';
    }
}