#include<bits/stdc++.h>
using namespace std;

bool distinctCheck(long n) {
    string s = to_string(n);
    bool flag = true;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s[i+1]) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    long n;
    cin >> n;
    do {
        n++;
    } while(!distinctCheck(n));
    cout << n << endl;
    return 0;
}