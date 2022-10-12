#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll fact(int n);
 
ll nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
ll fact(int n)
{
      if(n==0)
      return 1;
    ll res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int main() {
    string a, b; cin >> a >> b;
    int pB = 0, p = 0, n = 0;
    for (auto &x: a) if (x == '+') pB++;
    for (auto &x: b) {
        if (x == '+') p++;
        if (x == '?') n++;
    }
    int dif = pB - p;
    if (dif == 0 && n == 0) {
        cout << fixed << setprecision(10) << 1 << endl;
    }
    else if (n < dif || dif < 0) {
        cout << fixed << setprecision(10) << 0.0 << endl;
    }
    else {
        double res = 1.0*nCr(n, dif);
        // cout << "nCr = " << res << " " << n - dif << endl;
        int i = n;
        while (i--) res = res/2;

        cout << fixed << setprecision(10) << res << endl;
    }
}