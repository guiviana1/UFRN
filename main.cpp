#include <bits/stdc++.h>

int main () {

    int linhas, colunas;
    std::cin >> linhas >> colunas;


    int matriz1[linhas][colunas];
    int matriz2[colunas][linhas];

    for(int i = 0 ; i < linhas ; i++) {        
        for(int j = 0 ; j < colunas ; j++) {
            std::cin >> matriz1[i][j];
        }
    }

     for(int i = 0 ; i < colunas ; i++) {         
        for(int j = 0 ; j < linhas ; j++) {
            matriz1[linhas][colunas] = matriz2[colunas][linhas];


        }
     }


    if (matriz1 == matriz2) {
        std::cout << "Matriz Simétrica";
    }

    return 0;
}