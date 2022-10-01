#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int total = 0;
    int a[100];
    for (int i = 0; i < k; i++) {
        cin >> a[i];
        total += a[i] > 0? 1:0;
    }
    for (int i = k; i < n; i++) {
        cin >> a[i];
        total += (a[i] >= a[k-1])&&(a[i] > 0)? 1:0;
    }
    cout << total << endl;
    return 0;
}