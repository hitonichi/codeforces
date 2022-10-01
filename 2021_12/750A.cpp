#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int x = 240 - k;
    int l = 0, r = n, ans = 0;
    while (l <= r) {
        int m = (l + r) / 2;
        if (5*m*(m+1)/2 <= x) {
            ans = m;
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    cout << ans << endl;
    return 0;
}