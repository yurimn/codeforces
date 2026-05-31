//
// Created by Yurim on 2026. 5. 31..
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, x, s;
        cin>>n>>x>>s;
        string v;
        cin>>v;
        vector dp(n,vector(x+1,-99999));

        int cnt_i = ranges::count(v,'I');
        int cnt_a = ranges::count(v,'A');
        int cnt_e = ranges::count(v,'E');
        dp[0][0] = 0;
        if (v[0] != 'E') {
            dp[0][1] = 1;
        }
        for (int i=1;i<n;i++) {
            dp[i][0] = dp[i-1][0];
            for (int j=1;j<=x;j++) {

                dp[i][j] = dp[i-1][j];
                if (v[i] == 'E') {
                    if (j*s > dp[i-1][j] ) dp[i][j] = max(dp[i][j],dp[i-1][j]+1);
                }
                else if (v[i] == 'I') {
                     dp[i][j] = max(dp[i-1][j-1]+1, dp[i][j]);
                } else {
                    dp[i][j] = max(dp[i-1][j-1]+1, dp[i][j]);
                    if (j*s > dp[i-1][j]  ) dp[i][j] = max(dp[i][j],dp[i-1][j]+1);
                }
            }
        }
        cout << max(0,ranges::max(dp[n-1])) << '\n';;



    }
}