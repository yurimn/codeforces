//
// Created by Yurim on 2026. 5. 18..
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int a, b, n;
        cin>>n>>a>>b;
        if (3*a<b) {
            cout << a*n << '\n';
        } else if (n%3 && (n%3)*a>=b) {
            cout << b*(n/3+1) << '\n';
        } else
        {
            cout << b*(n/3)+a*(n%3) << '\n';
        }

    }
    return 0;
}
