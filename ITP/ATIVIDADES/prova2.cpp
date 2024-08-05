#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, d, max, min, maior;
    cin >> n;
    maior = 0;

    for (int i = 0; i < n; i++) {

        cin >> max >> min;
        d = max - min;
        

       if (d > maior) {
        maior = d;
       }
       else if (d < maior) {
        maior = maior;
       }

    }
    cout << maior;

// nao consegui pensar em como armazenar os valores de loop do for e compará-los depois, mas tá ai uma tentativa

    return 0;
}




// if (h > ) {                esboço de uma lógica para o código
//           cout << h;
//       }