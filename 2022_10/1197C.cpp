#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (auto &x: a) cin >> x;


    vector<int> cost(n - 1, 0);
    for (int i = 1; i < n; i++) {
        cost[i - 1] = a[i - 1] - a[i];
    }

    long long res = a[n - 1] - a[0];
    sort(cost.begin(), cost.end());

    for (int i = 0; i < k - 1; i++) res += cost[i];

    cout << res;


    return 0;
}