#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec(4);
    for (auto &x: vec) cin >> x;
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    cout << 4 - vec.size() << endl;
    return 0;
}