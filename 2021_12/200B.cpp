#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double x, s;
    for (int i = 0; i < n; i++) {
        cin >> x;
        s += x;
    }
    cout << fixed << setprecision(5) << s / n << endl;
    return 0;
}