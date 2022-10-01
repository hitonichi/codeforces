#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n;
    bool isValid = true;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x == 1) {
            isValid = false;
            break;
        }
    }
    if (isValid) {
        cout << "EASY" << endl;
    }
    else cout << "HARD" << endl;
    return 0;
}