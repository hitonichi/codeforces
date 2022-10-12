#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >>n;
        int red = 0, blue = 0;
        string a, b; cin >> a >> b;

        for (int i = 0; i < n; i++) {
            if ((int)a[i] > (int)b[i]) red++;
            else if ((int)a[i] < (int)b[i]) blue++;
        }

        if (red > blue) cout << "RED\n";
        else if (red == blue) cout << "EQUAL\n";
        else cout << "BLUE\n";
    }
    return 0;
}