#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i = 1; i <= n; i++)
            if (i == n) cout << 1;
            else cout << i + 1 << " ";
        cout << endl;
    }
    return 0;
}