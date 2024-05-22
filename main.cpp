#include <bits/stdc++.h>

int main() {
    int quant, lote;

    std::cin >> quant;
    int lotes[quant];

    for(int i = 0; i < quant; i++) {
        std::cin >> lotes[i];
        if (lotes[i] == 2) {
            lote = i;
        }
    }

    int cont = 0;
    for (int i = lote - 1; i >= 0; i--) {
        if (lotes[i] == 0) {
            cont++;
        }
        else {
            break;
        }
    }

    for (int i = lote + 1; i < quant; i++) {
        if (lotes[i] == 0) {
            cont++;
        }
        else {
            break;
        }
    }

    std::cout << cont;

    return 0;
}