//
// Created by Yurim on 2026. 5. 22..
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
        for (int i=0;i<n;i++) {
            cin>>v[i];
        }
        int sum = 0;
        int num = v[0];

        for (int i=1;i<n;i++) {
            vector<int> cur_v;
            int tmp1 = num;
            int cnt1 = 1;
            while (tmp1>1) {
                cur_v.push_back
                if (tmp1%2) tmp1++;
                else tmp1 /=2;
            }
            cur_v[tmp1] = cnt1;

            int tmp2 = v[i];
            int cnt2 = 0;
            while (!cur_v[tmp2]) {
                if (tmp2%2) tmp2++;
                else tmp2 /=2;
                cnt2++;
            }
            num = tmp2;
            sum = sum+i*cur_v[tmp2] + cnt2;
        }
        cout << sum << '\n';

    }
}