#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string s; cin >> s;
    
    int prea[5001], preb[5001];
    fill(prea, prea + 5001, 0);
    fill(preb, preb + 5001, 0);

    // prea[0] = (s[0] == 'a');
    // preb[0] = (s[0] == 'b');
    for (int i = 1; i <= s.length(); i++) {
        prea[i] = prea[i - 1] + (s[i - 1] == 'a');
        preb[i] = preb[i - 1] + (s[i - 1] == 'b');
    }

    int res = 0;
    for (int i = 0; i <= s.length(); i++) {
        for (int j = i; j <= s.length(); j++) {
            int tmp = prea[i] + (preb[j] - preb[i]) + (prea[s.length()] -prea[j]);
            // if (res < tmp) {
            //     cout << "update: (i, j) = " << i << " " << j << endl; 
            // }
            res = max(res, tmp);
        }
    }
    // cout << preb[0];
    cout << res;

    return 0;
}