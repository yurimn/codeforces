//
// Created by Yurim on 2026. 4. 13..
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        if (a.size() == n) {
            for (int i=n-1; i>=0;i--) {
                cout << a[i] << ' ';
            }
            cout << '\n';
        } else {
            cout << "-1" << '\n';
        }

    }
    return 0;


}