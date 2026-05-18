//
// Created by Yurim on 2026. 5. 18..
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin >> s;
        int l = s.size();
        vector<int> two(l), one_three(l);
        int val = 0;

        two[0] = s[0] == '2';
        for (int i=1;i<l;i++) {
            if (s[i] == '2') two[i] = two[i-1]+1;
            else two[i] = two[i-1];
        }

        one_three[l-1] = s[l-1] == '1' || s[l-1] == '3';
        for (int i=l-2;i>=0;i--) {
            if (s[i]=='1' || s[i] == '3') one_three[i] = one_three[i+1]+1;
            else one_three[i] = one_three[i+1];
        }

        for (int i=0;i<l;i++) {
            if (val < two[i]+one_three[i]) val = two[i]+one_three[i];
        }
        // for (int i=0;i<l;i++) {
        //     cout << two[i];
        // }
        // cout << '\n';
        // for (int i=0;i<l;i++) {
        //     cout << one_three[i];
        // }
        // cout << '\n';
        cout << l - val << '\n';
    }
}


