#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int cnt = 0;
    int p, q;
    for (int i = 1; i <= n; i++) {
        cin >> p >> q;
        cnt += (abs(p-q) >= 2)? 1:0;
    }
    cout << cnt << endl;
    return 0;
}