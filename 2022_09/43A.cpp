#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a, b;
    bool gotB = false;
    int na = 0, nb = 0;
    cin >> a;
    na++;
    n--;
    while (n--)
    {
        string tmp;
        cin >> tmp;
        if (tmp != a)
        {
            if (!gotB)
                b = tmp;
            nb++;
        }
        else
            na++;
    }
    cout << ((na > nb) ? a : b) << endl;
    return 0;
}