#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int a, b; cin >> a >> b;
    int w = max(a, b);
    switch (6 - w + 1) {
        case 6:
            cout << "1/1\n";
            break;
        case 1:
        case 5:
            cout << 6 - w + 1 << "/6\n";
            break;
        case 2:
        case 4:
            cout << (6 - w + 1)/2 << "/3\n";
            break;
        default:
            cout << "1/2\n";
            break;
    }
    return 0;
}