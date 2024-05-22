#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, s;
    cin >> t;
    if (t >= 0 && t < 5) {
        cout << "Iniciante" << endl;
    } 
    else if (t >= 5 && t < 20) {
        cin >> s;
        if (s == 0) {
            cout << "Iniciante" << endl;
        }
        else if (s == 1) {
            cout << "Intermediário" << endl;
        }
    }
    else if (t >= 20) {
        cin >> s;
        if (s == 0) {
            cout << "Intermediário" << endl;
        }
        else if (s == 1) {
            cout << "Avançado" << endl;
        }
    }
    return 0;
    }
