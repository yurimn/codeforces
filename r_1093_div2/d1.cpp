//
// Created by Yurim on 2026. 4. 14..
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
        while (true) {
            vector<int> v(n);
            int k=1;
            vector<int> tmp(k);
            cout << '?' << ' ';
            for (int i=0;i<k;i++) {
                cout << tmp[i] << ' ';
            }
            fflush(stdout);

        }

    }
    return 0;
}