#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string s0 = "hello";
    int i = 0, j = 0;
    bool valid = false;
    while (i < s.length())
    {
        if (s[i] == s0[j])
        {
            j++;
            i++;
            if (j == s0.length())
            {
                valid = true;
                break;
            }
        }
        else
            i++;
    }
    if (valid)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
    return 0;
}