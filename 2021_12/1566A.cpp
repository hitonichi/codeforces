#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t-- > 0) {
        long long n, s; cin >> n >> s;
        long long m = n / 2 + 1;
        cout << s / m << endl;
    }
    return 0;
}