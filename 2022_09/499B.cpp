#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> la(m), lb(m);
    for (int i = 0; i < m; i++)
    {
        cin >> la[i] >> lb[i];
    }
    vector<string> src, res;

    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        src.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (src[i] == la[j])
            {
                if (lb[j].length() < la[j].length())
                {
                    res.push_back(lb[j]);
                }
                else
                {
                    res.push_back(la[j]);
                }
                break;
            }
        }
    }
    for (auto &x : res)
        cout << x << " ";

    return 0;
}
