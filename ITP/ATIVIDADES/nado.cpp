#include <bits/stdc++.h>
using namespace std;

int main() {
    double t1, t2, t3, corte;
    cin >> t1 >> t2 >> t3 >> corte;

    if (t1 < t2 && t1 < t3) {
        if (t1 < corte){
            cout << "Atleta aprovado com tempo " << t1 << "s e nota de corte " << corte << "s" << endl;
        }
        else if (t1 > corte) {
            cout << "Atleta reprovado com tempo " << t1 << "s e nota de corte " << corte << "s" << endl;
        }     
    }
    else if (t2 < t1 && t2 < t3) {
        if (t2 < corte){
            cout << "Atleta aprovado com tempo " << t2 << "s e nota de corte " << corte << "s" << endl;
        }
        else if (t2 > corte) {
            cout << "Atleta reprovado com tempo " << t2 << "s e nota de corte " << corte << "s" << endl;
        }     
    }
    else if (t3 < t1 && t3 < t2) {
        if (t3 < corte){
            cout << "Atleta aprovado com tempo " << t3 << "s e nota de corte " << corte << "s" << endl;
        }
        else if (t3 > corte) {
            cout << "Atleta reprovado com tempo " << t3 << "s e nota de corte " << corte << "s" << endl;
        }     
    }
    return 0;
}