#include <bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

bool isDiv(string a, string b)
{
    int x = b.length();
    string tmp;
    while (x--)
    {
        tmp += a;
    }
    if (a.substr(0, b.length()) != b)
        return false;
    else
        return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int na = lcm(a.length(), b.length()) / a.length();
        int nb = lcm(a.length(), b.length()) / b.length();

        string resA, resB;
        while (na--)
            resA += a;
        while (nb--)
            resB += b;

        if (resA == resB)
            cout << resA << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}