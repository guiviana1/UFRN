#include <bits/stdc++.h>
using namespace std;

int main () {
    int A, B;
    cin >> A >> B;
    if ((A % 2 == 0) && (B % 2 == 0)) 
    {
        cout << A + B << endl;
    }
    else if ((A % 2 != 0) && (B % 2 == 0))
    {
        cout << "Não posso somar, pois " << A << " não é par" << endl;
    }
    else if ((A % 2 == 0) && (B % 2 != 0)) 
    {
        cout << "Não posso somar, pois " << B << " não é par" << endl;
    }
    else if ((A % 2 != 0) && (B % 2 != 0))
    {
        cout << "Não posso somar, pois " << A << " não é par" << endl;
        cout << "Não posso somar, pois " << B << " não é par" << endl;
    }

    return 0;
}