#include<bits/stdc++.h>
using namespace std;

int main() {
    int k;
    long n;
    cin >> n >> k;
    while (k > 0) {
        if (n % 10 == 0) {
            n /= 10;
        }
        else n--;
        k--;
    }
    cout << n << endl;
    return 0;
}