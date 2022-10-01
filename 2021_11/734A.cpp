#include<bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin >> n;
    string s;
    cin >> s;
    long count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A')
            count++;
    }
    if ((double)count/n > 0.5) cout << "Anton" << endl;
    else if ((double)count/n == 0.5) cout << "Friendship" << endl;
    else cout << "Danik" << endl;
    return 0;
}