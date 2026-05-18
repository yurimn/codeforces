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
        cin>>n;
        vector<int> a(n), b(n), v(n);
        for (int i=0;i<n;i++) cin>>a[i];
        for (int i=0;i<n;i++) cin>>b[i];
        int current_number = 1;
        for (int i=0;i<n;i++) {
            if (a[i] == current_number && b[i] == current_number) {
                
            }
            if (a[i] == current_number || b[i] == current_number) {

            }
        }
    }
}
