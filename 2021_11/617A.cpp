#include<bits/stdc++.h>
using namespace std;

int main() {
    long x;
    cin >> x;
    long step = 1;
    while (x > 5) {
        step++;
        x -= 5;
    }
    cout << step << endl;
    return 0;
}