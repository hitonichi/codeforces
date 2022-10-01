#include <bits/stdc++.h>
using namespace std;

string sa[20][20];
string sb[20][20];

void init()
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            sa[i][j] = "";
            sb[i][j] = "";
        }
    }
}

void dp(string s)
{
    sa[0][0] = s;
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20 - i; j++)
        {
            if (i == 0 && j == 0)
                continue;

            if (i + j >= s.length())
                continue;

            string tmp = s.substr(0, s.length() - j);
            tmp = tmp.substr(i);
            sa[i][j] = tmp;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        string a, b;
        cin >> a >> b;
        dp(a);
        dp(b);

        for ()
    }
}