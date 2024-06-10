#include <bits/stdc++.h>
#include <string>
#include <string.h>

using namespace std;
int main() {
    int idade;
    int tamanho;
    float altura;
    string nome;

    cout << "Digite seu nome: ";
    getline(std::cin, nome);

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite sua altura: ";
    cin >> altura;

    char pos = nome[5];
    char primeira = nome.front();
    char ultima = nome.back();
    tamanho = nome.size();





    cout << "Sua idade eh: " << idade << endl;
    cout << "Seu nome eh: " << nome << endl;
    cout << "Sua altura eh: " << altura << endl;
    cout << pos << endl;
    cout << primeira << endl;
    cout << ultima << endl;
    cout << tamanho << endl;

    return 0;
}
