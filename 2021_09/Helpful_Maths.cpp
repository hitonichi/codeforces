#include<iostream>
#include<cstring>
using namespace std;

void print_out(int one, int two, int three) {
    while (one > 0) {
        if ((two == 0)&&(three == 0)) {
            if (one == 1)
                cout << 1;
            else
                cout << "1+";
            one--;
        }
        else {
            cout << "1+";
            one--;
        }
    }
    while (two > 0) {
        if (three == 0) {
            if (two == 1)
                cout << 2;
            else
                cout << "2+";
            two--;
        }
        else {
            cout << "2+";
            two--;
        }
    }
    while (three > 0) {
        if (three == 1)
            cout << 3;
        else
            cout << "3+";
        three--;
    }
    cout << endl;
}

int main() {
    char s[100];
    int one, two, three;
    one = two = three = 0;
    cin >> s;
    for (int i = 0; i < strlen(s); i++) {
        switch (s[i]) {
            case '1':
                one++;
                break;
            case '2':
                two++;
                break;
            case '3':
                three++;
                break;
            default:
                break;
        }
    }
    print_out(one, two, three);
    return 0;
}