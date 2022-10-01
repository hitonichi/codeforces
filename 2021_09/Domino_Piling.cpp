#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int m,n,s;
    int total = 0;
    cin >> m >> n;
    s = m*n;
    total = s % 2 == 0? s/2 : (s - 1) / 2;
    cout << total << endl;
    return 0;
}