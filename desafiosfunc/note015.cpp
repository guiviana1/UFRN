#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/*
 * Uma das operações mais usadas para tratar dados preenchidos por usuários é
 * remover os espaços em branco no inicio ou no final de um formulário, por exemplo.
 * Essa operação chama-se "trim".
 * 
 * Implemente uma função que realiza a operação trim em uma string passada. A função
 * deve retornar uma nova string com os espaços em branco iniciais e finais removidos.
 */


std::string trim(std::string str){
  int count=0, countf=0, tam= str.size(), k=0;
  
  for(int i=0; i< tam; i++){
    if(str[i] == ' '){
      count++;
      continue;
    }
    break;
  }
  for(int i=tam-1; i>=0; i--){
    if(str[i] == ' '){
      countf++;
      continue;
    }
    break;
  }
  std::string a; //(tam - count - countf, '\0');
  for(int i=count; i < tam - countf; i++){
    //a[k] = str[i];
    //k++;
    a.push_back(str[i]);
  }

  return a;

}
