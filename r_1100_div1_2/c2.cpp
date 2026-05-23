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
        vector<long long int> v(n), sum1(n), sum2(n), sum(n);

        for (int i=0;i<n;i++) {
            cin >> v[i];
        }
        sum1[0] = abs(v[0]);
        sum2[0] = v[0];
        for (int i=1;i<n;i++) {
            sum1[i] = sum1[i-1]+abs(v[i]);
            sum2[i] = sum2[i-1]+v[i];
        }
        for (int i=0;i<n;i++) {
            if (i>0 && v[i]>0) {
                sum[i] = sum1[i-1]-v[i]+(sum2[n-1]-sum2[i]);
            }
            else {
                sum[i] = sum2[n-1];
            }
        }

        long long int max_sum = ranges::max(sum);
        long long int i= ranges::max_element(sum) - sum.begin()-1;
        long long int ii = i;

        vector<long long int> tmp;


        if (max_sum <= sum2[n-1]) {
            cout << 0 << '\n' << '\n';
        }
        else {
            while (v[i]<0) i--;
            if (i>=0) tmp.push_back(i);
            while (i>0) {
                if (v[i]*v[i-1] < 0) {
                    tmp.push_back(i-1);
                }
                i--;
            }
            tmp.push_back(ii+1);
            cout << tmp.size() << '\n';
            if (!tmp.empty()) for (long long j : tmp) cout << j+1 << ' ';
            cout << '\n';
        }




    }
}
