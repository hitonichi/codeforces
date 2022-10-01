#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int bend = 0;
    int temp;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        if (temp > h) bend++;
    }
    cout << (n+bend) << endl;
    return 0;
}