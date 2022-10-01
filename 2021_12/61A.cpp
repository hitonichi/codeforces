#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2; cin >> s1 >> s2;
    string res; char x;
    for (int i = 0; i < s1.length(); i++) {
        x = (s1[i] == s2[i])? '0' : '1';
        res.push_back(x);
    }
    cout << res << endl;
    return 0;
}