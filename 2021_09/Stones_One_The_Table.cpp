#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int tol = 0;
    char s[n];
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == s[i + 1])
            tol++;
    }
    cout << tol << endl;
    return 0;
}