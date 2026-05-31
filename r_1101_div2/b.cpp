//
// Created by Yurim on 2026. 5. 30..
//
//
// #include <bits/stdc++.h>
// using namespace std;
//
// int main() {
//     int t;
//     cin>>t;
//     while (t--) {
//         int n;
//         cin>>n;
//         vector<long long int> v(n), s(n);
//         for (int i=0;i<n;i++) {
//             cin>>v[i];
//             if (i==0) s[i]=v[i];
//             else s[i] = s[i-1]+v[i];
//         }
//         long long int k = 0;
//
//         for (long long int i=0;i<n;i++) {
//             if (i==0) {
//                 cout << v[i] << ' ';
//                 k = v[i];
//             }
//             else {
//                 cout << (k = min(k, s[i]/(i+1))) << ' ';
//             }
//         }
//         cout << '\n';
//     }
// }

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
        long long int r = 0;
        long long int k = 0;

        for (int i=0;i<n;i++) {
            if (i==0) {
                cout << v[i] << ' ';
                k = v[i];
                continue;
            }
            if (k < v[i]) {
                cout << k << ' ';
                r += v[i]-k;
            }
            else {
                long long int new_k = (k*i+v[i]+r)/(i+1);
                long long int new_r = (k*i+v[i]+r)%(i+1);
                cout << new_k << ' ';
                k = new_k;
                r = new_r;
            }
        }
        cout << '\n';
    }
}