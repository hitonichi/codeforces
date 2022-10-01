#include<bits/stdc++.h>
using namespace std;

bool check(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            count++;
        }
    }
    if (((double)count/s.length()) >= 0.5)
        return true;
    else
        return false;
}

int main() {
    string s;
    cin >> s;
    if (check(s)) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    return 0;
}