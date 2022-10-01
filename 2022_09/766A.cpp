#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if (a.length() != b.length())
    {
        if (a.length() > b.length())
            cout << a.length() << endl;
        else
            cout << b.length() << endl;
    }
    else if (a == b)
        cout << -1 << endl;
    else
    {
        cout << a.length() << endl;
    }
    return 0;
}