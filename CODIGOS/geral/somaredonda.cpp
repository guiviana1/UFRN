#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;

    cout << fixed << setprecision(2);

    cin >> a >> b;
    cout << a + b << endl;

    return 0;
}