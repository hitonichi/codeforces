#include<bits/stdc++.h>
using namespace std;

const int MAX = 5001;
vector<int> loc[MAX];

int main() {
    int t; cin >> t;
    while (t--) {
        for (auto &x: loc) x.clear();

        int n; cin >> n;
        vector<int> vec(n);
        for (auto &x: vec) cin >> x;

        for (int i = 0; i < n; i++) {
            loc[vec[i]].push_back(i);
        }
        
        bool valid = false;
        for (int i = 1; i <= n; i++) {
            if (loc[i].size() >= 2) {
                int dist = loc[i][loc[i].size() - 1] - loc[i][0] + 1;
                if (dist >= 3) {
                    valid = true;
                    break;
                }
            }
        }
        if (valid) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}