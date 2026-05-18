//
// Created by Yurim on 2026. 5. 19..
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        long long int ones = 0;
        long long int numbers=0;
        long long int spacers=0;
        for (int i=0;i<n;i++) cin >> v[i];
        for (int i=0;i<n;i++) {
            if (v[i] == 1) ones++;
            else if (v[i] == 2) numbers +=v[i];
            else if (v[i]>=3) {
                numbers += v[i];
                spacers += v[i]/2-1;
            }
        }
        long long int val = numbers + min(spacers, ones);
        if (ones == n-1 && ones > spacers) val++;
        cout << (val>2?val:0)<< '\n';

    }
}
