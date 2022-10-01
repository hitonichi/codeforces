#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> goal(n), start(n);
        string s;

        // Input goal
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                goal[i] = 1;
            else
                goal[i] = 0;
        }

        // Input start
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                start[i] = 1;
            else
                start[i] = 0;
        }

        // Debug
        // for (auto &x : goal)
        //     cout << x;

        // for (auto &x : start)
        //     cout << x;

        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (start[i] == 1)
            {
                if (i > 0 && goal[i - 1] == 1)
                {
                    max++;
                    start[i] = 0;
                    goal[i - 1] = -1; // Occupied
                }
                else if (goal[i] == 0)
                {
                    max++;
                    start[i] = 0;
                    goal[i] = -1; // Occupied
                }
                else if (i < n - 1 && goal[i + 1] == 1)
                {
                    max++;
                    start[i] = 0;
                    goal[i + 1] = -1;
                }
            }
        }

        cout << max << endl;
    }
    return 0;
}