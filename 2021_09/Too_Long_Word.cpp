#include<iostream>
#include<string.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char a[100];
        cin >> a;
        if (strlen(a) > 10)
            cout << a[0] << (strlen(a) - 2) << a[strlen(a) - 1] << endl;
        else {
            for (int i = 0; i < strlen(a); i++) {
                cout << a[i];
            }
            cout << endl;
        }
    }
    return 0;
}