#include<iostream>
#include<string.h>
using namespace std;

int main() {
    int x = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s[0] == '+')
            x++;
        if(s[0] == '-')
            x--;
        if(s[2] == '+')
            x++;
        if(s[2] == '-')
            x--;
    }
    cout << x << endl;
    return 0;
}