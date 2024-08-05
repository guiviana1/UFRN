#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a * a) + (b * b) == (c * c)) {
        cout << "Pythagorean triple!" << endl;
    }
    else if ((b * b) + (c * c) == (a * a)) {
        cout << "Pythagorean triple!" << endl;
    }
    else if ((c * c) + (a * a) == (b * b)) {
        cout << "Pythagorean triple!" << endl;
    }
    else {
        cout << "Not a Pythagorean triple!" << endl;
    }
    return 0;
}