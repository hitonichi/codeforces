#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> soi(n);
    for (int &x: soi) cin >> x;

    int max = soi[0], locx = 0;
    for (int i = 0; i < n; i++) {
        if (max < soi[i]) {
            max = soi[i];
            locx = i;
        }
    }

    int min = soi[n - 1], locy = n - 1;
    for (int i = n - 1; i >= 0; i--) {
        if (min > soi[i]) {
            min = soi[i];
            locy = i;
        }
    }

    if (locx > locy)
        cout << locx + n - locy - 2 << endl;
    else
        cout << locx + n - locy - 1 << endl;
    return 0;
}