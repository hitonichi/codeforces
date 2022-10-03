#include<bits/stdc++.h>
using namespace std;

/*
    Brightness per star: f(t) = (f(0) + t)%(c+1)
    Func: bool isInside(x1, y1, x2, y2, xs, ys) {
        ...
    }

    if (isInside()) {
        res += f_i(t);
    } => O(10^5)
    view(x1y1-x2y2) = view(00-x2y2)-view(00-x1y2)-view(00-x2y1)+view(00-x1y1);

    => Array total[100][100][10]:
        for (c: 0 - 10):
            total[0][0][c] = f_(0,0)[c] (if exist)
            total[a][b][c] = total[a][b - 1][c] + total[a - 1][b][c] - total[a-1][b-1] + f_(a,b)[c]
        total[0][0] = f_(0,0)(0) (if exist)

    if include time: n*n*c*find(n^2) = 100*100*10*10000 => 10^9 @@

    c = 4; 
    ini = 2;
    => 2 3 4 0 1 acc. t = 0 1 2 3 4 . 5 6 7 8 9
*/

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, q, c; cin >> n >> q >> c;

    int stars[101][101];
    fill(&stars[0][0], &stars[0][0] + sizeof(stars)/sizeof(stars[0][0]), 0);

    // for (auto &x: stars) { 
    //     for (auto &y: x) cout << y << " ";
    //     cout << endl;
    // }

    // Init brightness
    for (int i = 0; i < n; i++) {
        int x, y, b; cin >> x >> y >> b;
        stars[x][y] = b;
    }

    // Init total - dp
    int total[11][101][101];
    for (int i = 0; i < 11; i++) {
        fill(&total[i][0][0], &total[i][0][0] + sizeof(total[i])/sizeof(total[i][0][0]), 0);
    }

    // Calc brightness
    for (int i = 0; i < 11; i++) {
        for (int m = 1; m < 101; m++) {
            for (int n = 1; n < 101; n++) {
                total[i][m][n] = total[i][m - 1][n] + total[i][m][n - 1] - total[i][m - 1][n - 1] + (stars[m][n] + i)%(c + 1);
            }
        }
    }

    while (q--) {
        int x1, x2, y1, y2, t;
        cin >> t >> x1 >> y1 >> x2 >> y2;
        long long res =     total[t%(c + 1)][x2][y2]
                            - total[t%(c + 1)][x1 - 1][y2]
                            - total[t%(c + 1)][x2][y1 - 1]
                            + total[t%(c + 1)][x1 - 1][y1 - 1];
        cout << res << endl;
    }

    return 0;
}