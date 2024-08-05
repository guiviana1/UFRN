#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a >= b && a >= c && a >= d) {
        cout << "Maior: " << a << endl;
    }
    else if (b >= a && b >= c && b >= d) {
        cout << "Maior: " << b << endl;
    }
    else if (c >= a && c >= b && c >= d) {
        cout << "Maior: " << c << endl;
    }
    else if (d >= a && d >= b && d >= c) {
        cout << "Maior: " << d << endl;
    }

    return 0;
}
