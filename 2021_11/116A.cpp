#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cap = 0;
    int max = 0;
    int a, b;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        cap = cap - a + b;
        max = (cap > max)? cap : max;
    }
    cout << max << endl;
    return 0;
}