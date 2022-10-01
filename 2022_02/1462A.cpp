#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> bod, ori;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            bod.push_back(x);
        }
        int p1 = 0, p2 = n - 1;
        bool prior = true;
        while (p1 <= p2) {
            if (prior) {
                ori.push_back(bod[p1]);
                prior = !prior;
                p1++;
            }
            else {
                ori.push_back(bod[p2]);
                prior = !prior;
                p2--;
            }
        }
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                cout << ori[i] << endl;
                break;
            }
            cout << ori[i] << " ";
        }
    }
    return 0;
}