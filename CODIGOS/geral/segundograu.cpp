#include <bits/stdc++.h>
using namespace std;

int main () {
    double a, b, c, delta, raiz1,raiz2;
    cin >> a >> b >> c;
    delta = ((b*b) - (4*a*c));
    raiz1 = (((-b) + sqrt(delta)) / (2*a));
    raiz2 = (((-b) - sqrt(delta)) / (2*a));
    cout << fixed << setprecision(2) << raiz1 << " " << raiz2 << endl;


    return 0;
}