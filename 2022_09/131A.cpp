#include <iostream>
using namespace std;

bool capOn(string s)
{
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            return false;
    }
    return true;
}

void solve(string &s)
{
    for (int i = 1; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }

    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] = toupper(s[0]);
    else
        s[0] = tolower(s[0]);
}

int main()
{
    string s;
    cin >> s;
    if (capOn(s))
    {
        solve(s);
    }
    cout << s << endl;
    return 0;
}