#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    int cnt[256];
    fill(cnt, cnt + 256, 0);
    if (s.length() % k != 0)
    {
        cout << -1 << endl;
        return 0;
    }

    for (auto &x : s)
    {
        cnt[x]++;
    }
    string res = "";
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (cnt[i] % k != 0)
        {
            cout << -1 << endl;
            return 0;
        }
        int tmp = cnt[i] / k;
        while (tmp--)
            res += i;
    }
    string tmp = res;
    while (k-- - 1)
        res += tmp;
    cout << res << endl;
    return 0;
}