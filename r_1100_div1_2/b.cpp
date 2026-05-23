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
        vector<int> a(n), b(n);

        for (int i=0;i<n;i++) cin>>a[i];
        for (int i=0;i<n;i++) cin>>b[i];

        int max_num = max(ranges::max(a), ranges::max(b));
        // cout << max_num << '\n';

        for (int i=0;i<n;i++) {
            if (a[i] > b[i]) swap(a[i], b[i]);
        }

        long long int sum = 0;
        for (int i=0;i<n;i++) sum += b[i];
        sum += ranges::max(a);
        cout << sum << '\n';

    }
}
