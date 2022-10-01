#include<bits/stdc++.h>
using namespace std;

int main() {
    int k, l, m, n; cin >> k >> l >> m >> n;
    int d; cin >> d;
    vector<bool> dra(d + 1, false); 
    int cnt = 0;
    for (int i = k; i <= d; i += k) {
        dra[i] = true;
    }
    for (int i = l; i <= d; i += l) {
        dra[i] = true;
    }
    for (int i = m; i <= d; i += m) {
        dra[i] = true;
    }
    for (int i = n; i <= d; i += n) {
        dra[i] = true;
    }

    for (int i = 1; i <= d; i++) {
        if (dra[i])
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}