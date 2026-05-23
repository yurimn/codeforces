//
// Created by Yurim on 2026. 5. 24..
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<long long int> v(n);
        for (int i=0;i<n;i++) cin>>v[i];
        vector<long long int> tmp;
        int i=n-1;
        while (v[i]<0) i--;
        if (i>=0) tmp.push_back(i);
        while (i>0) {
            if (v[i]*v[i-1] < 0) {
                tmp.push_back(i-1);
            }
            i--;
        }
        cout << tmp.size() << '\n';
        if (!tmp.empty()) for (long long j : tmp) cout << j+1 << ' ';
        cout << '\n';
    }
}