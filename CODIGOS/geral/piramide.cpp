#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, K, L;
    cin >> M;
    L = M;
    K = 1;


    for (int i = 0; i < M; i++) {                                                                   //controla a quantidade de linhas
        
        // i é menor que m?  (primeira linha) , executa abaixo:


        for (int N = 1; N <= M; N++) {                                                              //controla a quantidade de digitos por linha
            
            // N é menor que M? sim, executa abaixo: 
            

            if (K <= N && N <= L) {
                cout << N << " ";
            }
            else {
                cout << "  ";
            }
        
        } // quando chega aqui o n aumenta
        
        
        L--;
        K++;
        cout << endl; 


    } // quando chega aqui o i aumenta


    return 0;
}
