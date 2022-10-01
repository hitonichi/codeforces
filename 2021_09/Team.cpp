#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    int total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            int temp;
            cin >> temp;
            sum += (temp == 1? 1:0);
        }
        total += (sum > 1? 1:0);
    }
    cout << total << endl;
    return 0;
}