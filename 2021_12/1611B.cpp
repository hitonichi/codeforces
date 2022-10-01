#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        long long a, b; cin >> a >> b;
        long long r = (a + b) / 4 + 1, l = 0;
        long long ans = 0;
        while (l < r) {
            long long m = l + (r - l) / 2;
            //cout << "m = " << m << endl;
            if (a >= m && b >= m) {
                ans = m;
                l = m + 1;
            }
            else
                r = m;
        }
        cout << ans << endl;
    }
    return 0;
}