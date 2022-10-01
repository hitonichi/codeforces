#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> dorm(n), let(m);
    for (auto &x: dorm) cin >> x;

    for (auto &x: let) cin >> x;

    vector<int> val;
    int sum = 1;
    for (int i = 0; i < n; i++) {
        val.push_back(sum);
        sum += dorm[i];
    }

    //cout << "val: "; for (auto &x: val) cout << x << " "; cout << endl;
    
    for (int i = 0; i < m; i++) {
        int des = let[i];

        int idx = -1, bloc = -1;

        int l = 0, r = n - 1, mid = (r + l) / 2;
        while (l < r) {
            //cout << l << " " << r << endl;
            if (des >= val[mid]) {
                l = mid + 1;
                mid = (r + l) / 2;
            }
            else {
                bloc = mid; idx = des - val[mid - 1] + 1;
                r = mid;
                mid = (r + l) / 2;
            }
        }
        cout << bloc << " " << idx << endl;
    }
}