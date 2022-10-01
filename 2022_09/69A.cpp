#include <bits/stdc++.h>
using namespace std;

int coor[3];

int main()
{
    int n;
    cin >> n;
    for (auto &x : coor)
        x = 0;
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        coor[0] += x;
        coor[1] += y;
        coor[2] += z;
    }
    if (coor[0] == 0 && coor[1] == 0 && coor[2] == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}