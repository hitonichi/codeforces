#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int card[n];
    for (auto &x: card) cin >> x;
    int sere = 0, dima = 0;
    int p1 = 0, p2 = n -1;
    bool flag = true;
    while (p1 <= p2) {
        int temp;
        if (card[p1] > card[p2]) {
            temp = card[p1];
            p1++;
        }
        else {
            temp = card[p2];
            p2--;
        }
        if (flag) {
            sere += temp;
            flag = !flag;
        }
        else {
            dima += temp;
            flag = !flag;
        }
    }
    cout << sere << " " << dima << endl;
    return 0;
}