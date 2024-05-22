#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, nletra, letra;
    cin >> a >> b >> c >> d;
    
    nletra = (a+b+c+d);
    
    if (nletra == 0) {
        cout << "Ei! Ninguém colocou nada!" << endl;
    }
    else {
        char x = 'A' + nletra - 1;
        if (x > 'Z') {
            x = x - 26;
        }
        cout << "Letra: " << x << endl;
    }

    return 0;
}