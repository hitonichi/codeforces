#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a; cin >> n >> m >> a;
    double x1 = ceil((double)n/a);
    double x2 = ceil((double)m/a);
    cout << std::fixed << setprecision(0) << x1 * x2 << endl;
    return 0;
}