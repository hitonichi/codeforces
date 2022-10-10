#include<bits/stdc++.h>
using namespace std;

int main() {
    /*
    Cases:
        - string no 'a' => main case
        - string with only 'a' => 1
        - with 'a' and more => -1
    */
    int q; cin >> q;
    while (q--) {
        string s, t; cin >> s >> t;
        if (t.find('a') != string::npos) {
            if (t.length() == 1) {
                cout << 1 << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
        else {
            long long res = 1;
            int i = s.length();
            while (i--) res *= 2;
            cout << res << endl;
        }
    }
    return 0;
}