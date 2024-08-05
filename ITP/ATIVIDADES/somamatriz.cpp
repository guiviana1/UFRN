#include <bits/stdc++.h>

int main() {
    int lin, col;

    bool identidade = true;

        
    std::cin >> lin >> col;

    int a[lin][col];

    for (int i = 0; i < lin; i++ ) {            //esses dois for pergunta qual a posição do elemento na matriz
        for (int j = 0; j < col; j++) {
            std::cin >> a[i][j];
        }
    }

    for (int i = 0; i < lin; i++ ) {          //esse vai checar se no i == j tem 1 ou nao
        for (int j = 0; j < col; j++) {
            if (i == j && a[i][j] != 1 && a[i][j == 0] {
                identidade = false;
            }
        }
    }

    if (identidade == true) {
        std::cout << "SIM" << std::endl;
    }
    else {
        std::cout << "NÃO" << std::endl;
    }


    return 0;
}