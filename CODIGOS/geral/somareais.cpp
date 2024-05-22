#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;

    cout << fixed << setprecision(2);
    cin >> a >> b;
    int c = (a + b) * 100;
    cout << c/100.0 << endl;

    return 0;
}