//
// Created by Yurim on 2026. 5. 23..
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
        for (int i=0;i<n;i++) {
            cin>>v[i];
        }

        // for (int i=0;i<n;i++) cout << v[i] << ' ';
        // cout << '\n';

        int sum = 0;
        while (true){
            ranges::sort(v);
            if (v[0] == v[n-1]) break;
            sum++;

            for (int i=0;i<n;i++) {
                if (v[i] == v[i+1]) v[i]++;
                else {
                    v[i]++;
                    break;
                }
            }
            if (v[0] == v[n-1]) break;
            for (int i=n-1;i>0;i--) {
                if(v[i] == v[i-1]) v[i]--;
                else {
                    v[i]--;
                    break;
                }
            }

        }
        cout << sum << '\n';

    }

}