//
// Created by Yurim on 2026. 4. 13..
//
#include <iostream>
#include <vector>

using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, m;
        cin>>n>>m;
        vector<int> v(n);
        for (int i=0;i<n;i++)cin>>v[i];
        int cnt=1;
        int flag=1;
        for (int i=1;i<n;i++) {
            if (v[i-1]==v[i]) cnt++;
            else cnt=1;

            if (cnt == m) {
                cout << "NO" << '\n';
                flag=0;
                break;
            }
        }
        if (flag) cout << "YES" << '\n';
    }
    return 0;
}