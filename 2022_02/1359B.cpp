#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m, x, y; cin >> n >> m >> x >> y;

        char sqa[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> sqa[i][j];
            }
        }

        bool prefer = 2*x < y ? true : false; //cout << prefer << endl;
        int cost = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (sqa[i][j] == '.') {
                    int temp = 1;
                    while ((j + temp < m) && sqa[i][j + temp] == '.') {
                        temp++;
                    }
                    if (prefer) {
                        cost += (temp) * x;
                    }
                    else {
                        cost += (temp) % 2 == 0 ? ((temp) * y / 2) : ((temp - 1) * y / 2 + x);
                        //cout << cost << endl;
                    }
                    j += temp;
                }
            }
        }
        cout << cost << endl;
    }
    return 0;
}