#include <iostream>
using namespace std;

int main () {                           
    int ano, mes, dia;
ano = 0;
mes = 0;
dia = 0;
    cin >> dia;
ano = dia/365; //a variavel ano ja ta resolvida aq pq o valor delas é inteiro (2)
dia = dia%365; //o resto dessa divisão vaidizer o novo valor de dia (o resto da divisão ao tirar a quantidade de anos) 
mes = dia/30; // aqui o resto dos dias vai ser dividido em meses. e aqui a variavel mes ja ta resolvida tbm, pois o valor sera inteiro
dia = dia%30; // se o numerador for menor e o denominador for maior, basicamente voce nem começou a divisão, portanto o resto será a propria quantidade de dias
    cout << ano << " ano(s)\n" << mes << " mes(es)\n" << dia << " dia(s)\n"; //o /n serve como endline tbm, e precisa estar dentro da string para funcionar

    return 0;
}