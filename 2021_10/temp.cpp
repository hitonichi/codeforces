#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n,p;
    cin >> m >> n;
    int ar[m][n];
    cin >> ar[0][0] >> ar[0][1] >> p;
    int a = ar[0][0];
    int b = ar[0][1];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0)&&((j == 0)||(j == 1)))
                continue;
            else {
                ar[i][j] = (a + b) % p;
                a = (j - 1 > 0)?ar[i][j - 1] : ar[i-1][n-1];
                b = ar[i][j];
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}