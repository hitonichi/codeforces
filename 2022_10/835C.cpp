#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q, c; cin >> n >> q >> c;

    int cnt[11][101][101];
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 101; j++) {
            fill(cnt[i][j], cnt[i][j] + 101, 0);
        }
    }

    for (int i = 0; i < n; i++) {
        int x, y, br; cin >> x >> y >> br;
        cnt[br][x][y]++;
    }

    // Filling by DP
    for (int i = 0; i <= c; i++) {
        for (int m = 1; m < 101; m++) {
            for (int n = 1; n < 101; n++) {
                cnt[i][m][n] = cnt[i][m - 1][n] + cnt[i][m][n - 1] - cnt[i][m - 1][n - 1] + cnt[i][m][n];
            }
        }
    }

    while (q--) {
        int t, x1, y1, x2, y2;
        cin >> t >> x1 >> y1 >> x2 >> y2;

        long long res = 0;
        for (int i = 0; i <= c; i++) {
            int p = (t + i) % (c + 1);

            int num = cnt[i][x2][y2] - cnt[i][x1 - 1][y2] - cnt[i][x2][y1 - 1] + cnt[i][x1 - 1][y1 - 1];
            res += num * p;
        }

        cout << res << endl;
    }

    return 0;
}