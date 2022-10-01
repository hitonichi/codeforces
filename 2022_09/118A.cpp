#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    if (c == 'a' ||
        c == 'e' ||
        c == 'i' ||
        c == 'o' ||
        c == 'u' ||
        c == 'y')
        return false;
    return true;
}

int main()
{
    string s;
    cin >> s;
    for (auto &x : s)
    {
        x = tolower(x);
    }

    string res = "";
    for (auto &x : s)
    {
        if (isVowel(x))
        {
            res += '.';
            res += x;
        }
    }
    cout << res << endl;
    return 0;
}