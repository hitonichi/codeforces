#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> chec(n+1);

    int p; cin >> p;
    vector<int> vx(p);
    for (int &x: vx) cin >> x;

    int q; cin >> q;
    vector<int> vy(q);
    for (int &x: vy) cin >> x;

    for (int i = 0; i < p; i++)
        chec[vx[i]]++;
    for (int i = 0; i < q; i++)
        chec[vy[i]]++;

    bool isInvalid = false;
    for (int i = 1; i <= n; i++) {
        if (chec[i] == 0) {
            isInvalid = true;
            break;
        }
    }
    if (isInvalid) 
        cout << "Oh, my keyboard!" << endl;
    else
        cout << "I become the guy." << endl;
    return 0;
}