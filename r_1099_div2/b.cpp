//
// Created by Yurim on 2026. 5. 21..
//
#include <iostream>
#include <vector>

using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i=0;i<n;i++) cin>>v[i];
        int max_diff = 0;
        for (int i=1;i<n;i++) {
            if (v[i-1]-v[i] > max_diff) max_diff = v[i-1]-v[i];
        }
        int k = max_diff;
        for (int i=1;i<n;i++) {
            if (v[i-1]>v[i]) v[i] += k;
        }
        bool flag = false;
        // cout << "k : " << k  << '\n';
        for (int i=1;i<n;i++) {
            if (v[i-1]>v[i]) {
                cout << "NO" << '\n';
                flag = true;
                break;
            }
        }
        if (flag) continue;
        cout << "YES" << '\n';

    }

}