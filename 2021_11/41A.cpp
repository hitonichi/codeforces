#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    string temp;
    for (int i = s.length() - 1; i >= 0; i--) {
        temp.push_back(s[i]);
    }
    if (temp.compare(t) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}