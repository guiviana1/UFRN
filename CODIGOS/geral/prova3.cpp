#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ouro1, prata1, bronze1, ouro2, prata2, bronze2, ouro3, prata3, bronze3;
    ouro1 = prata1 = bronze1 = ouro2 = prata2 = bronze2 = ouro3 = prata3 = bronze3 = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {

        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        if (p1 == 1) {
            ouro1 = ouro1 + 1;
        }
        else if (p1 == 2) {
            ouro2 = ouro2 + 1;
        }
        else if (p1 == 3) {
            ouro3 = ouro3 + 1;
        }


        if (p2 == 1) {
            prata1 = prata1 + 1;
        }
        else if (p2 == 2) {
            prata2 = prata2 + 1;
        }
        else if (p2 == 3) {
            prata3 = prata3 + 1;
        }


        if (p3 == 1) {
            bronze1 = bronze1 + 1;
        }
        else if (p3 == 2) {
            bronze2 = bronze2 + 1;
        }
        else if (p3 == 3) {
            bronze3 = bronze3 + 1;
        }

    }

cout << "país 1: " << ouro1 << " ouros, " << prata1 << " pratas e " << bronze1 << " bronzes" << endl;
cout << "país 2: " << ouro2 << " ouros, " << prata2 << " pratas e " << bronze2 << " bronzes" << endl;
cout << "país 3: " << ouro3 << " ouros, " << prata3 << " pratas e " << bronze3 << " bronzes" << endl;

    return 0;
}


// ouro1 = ouro1 + 1 tipo isso
