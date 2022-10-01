#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (((n - 2) % 2 == 0)&&(n > 2)&&(n < 101))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}