#include <bits/stdc++.h>

int main() {
    int linA, colA, linB, colB;

    std::cin >> linA >> colA;

    int A[linA][colA];
    for (int i = 0 ; i < linA ; i++) {
        for (int j = 0 ; j < colA ; j++) {
            std::cin >> A[i][j];
        }
    }
    std::cin >> linB >> colB;

    int B[linB][colB];
    for (int i = 0 ; i < linB ; i++) {
        for (int j = 0 ; j < colB ; j++){
            std::cin >> B[i][j];
        }
    }

    if (colA != linB) {
        std::cout << "Não é possível realizar a multiplicação!" << endl;
    }
    else { //agr realizar a multiplicação:
    for ()

    }






    return 0;
}