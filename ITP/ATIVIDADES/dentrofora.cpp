#include <iostream>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if ((x1 <= x3) && (x3 <= x2) && (y2 <= y3) && (y3 <= y1)) {
        cout << "O ponto está dentro do retângulo" << endl;
    }
    else {
        cout << "O ponto está fora do retângulo" << endl;
    }
    return 0;
}