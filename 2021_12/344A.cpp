#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string pre = "00";
    string cur;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cin >> cur;
        if (cur.compare(pre) != 0) {
            cnt++;
        }
        pre = cur;
    }
    cout << cnt << endl;
    return 0;
}