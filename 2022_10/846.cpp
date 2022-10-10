#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k, q; cin >> n >> m >> k >> q;

    int broke[501][501];
    for (auto &x: broke) fill(x, x + 501, INT_MAX);

    for (int i = 0; i < q; i++) {
        int x, y, t; cin >> x >> y >> t;
        broke[x][y] = t;
    }

    int res = -1, l = 0, r = 1e9, mid;
    while (l <= r) {
        //do sth
        mid = (l + r)/2;
        // cout << mid << endl;
        int cnt[501][501];
        for (auto &x: cnt) fill(x, x + 501, 0);

        // DP: fill cnt broken
        for (int i = 1; i < 501; i++) {
            for (int j = 1; j < 501; j++) {
                cnt[i][j] = cnt[i - 1][j] + cnt[i][j - 1] - cnt[i - 1][j - 1] + (broke[i][j] <= mid);
            }
        }

        // Find
        bool found = false;
        for (int i = k; i < 501; i++) {
            if (found) break;
            for (int j = k; j < 501; j++) {
                int area = cnt[i][j] - cnt[i - k][j] - cnt[i][j - k] + cnt[i - k][j - k];
                if (area >= k * k) {
                    found = true;
                    break;
                }
            }
        }
        if (found) {
            res = mid;
            r = mid - 1;
            continue;
        }
        else {
            l = mid + 1;
            continue;
        }
    }

    cout << res;

    return 0;
}