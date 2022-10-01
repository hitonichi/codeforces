#include <bits/stdc++.h>
using namespace std;

int main()
{

    int m, n, a;
    cin >> m >> n >> a;
    long long res = 0;
    if (m % a == 0)
        res = m / a;
    else
        res = m / a + 1;
    if (n % a == 0)
        res *= n / a;
    else
        res *= (n / a + 1);

    cout << res << endl;
    return 0;
}