#include<iostream>
using namespace std;

int main() {
    int n;
    int x, y;
    for (int i = 1; i < 26; i++) {
        cin >> n;
        if (n == 1)
            x = i;
    }
    if (x % 5 == 0) {
        y = x / 5;
        x = 5;
    }
    else {
        y = x / 5 + 1;
        x = x % 5;
    }
    int step;
    step = abs(x - 3) + abs(y - 3);
    cout << step << endl;
    return 0;
}