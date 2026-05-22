//
// Created by Yurim on 2026. 5. 21..
//
#include <iostream>
#include <vector>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<bool> num(2<<10);
        vector<int> v(n);
        v[0] = 1;
        num[1] = true;
        for (int i=1;i<n;i++) {
            for (int j=1;j<=2*n;j++) {
                if (!num[j]) {
                    v[i] = j;
                    num[v[i]] = true;
                    num[v[i-1]+v[i]] = true;
                    break;
                }
            }
        }
        for (int i=0;i<n;i++) {
            cout << v[i] << ' ';
        }
        cout << '\n';
    }
}