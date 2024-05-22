#include <bits/stdc++.h>
using namespace std;

int main() {
    double x1, x2, x3, y1, y2, y3, z1, z2, z3, d1, d2, d3;
    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;
    cin >> x3 >> y3 >> z3;

    d1 = ((x1 * x1) + (y1 * y1) + (z1 * z1));
    d1 = sqrt(d1);

    d2 = ((x2 * x2) + (y2 * y2) + (z2 * z2));
    d2 = sqrt(d2);

    d3 = ((x3 * x3) + (y3 * y3) + (z3 * z3));
    d3 = sqrt(d3);

    if (d1 < d2 && d1 < d3) {
        cout << setprecision(4) << d1;
    }
    else if (d2 < d1 && d2 < d3) {
        cout << setprecision(4) << d2;
    }
    else if (d3 < d1 && d3 < d2) {
        cout << setprecision(4) << d3;
    }
    
    return 0;
}