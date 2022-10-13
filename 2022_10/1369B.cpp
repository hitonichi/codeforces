#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int n0 = 0, n1 = 0;
        while (s[0] == '0') {
            n0++;
            s.erase(0, 1);
        }

        while (s[s.length() - 1] == '1') {
            n1++;
            s.erase(s.length() - 1, 1);
        }
        string s0(n0, '0'), s1(n1, '1');
        // cout << n0 << " " << n1 << " ";
        // cout << s0 << " " << s1 << " ";
        if (s.length() == 0) cout << s0 + s1 << endl;
        else cout << s0 + '0' + s1 << endl;
    }
    return 0;
}