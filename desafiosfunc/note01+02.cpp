#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

bool eh_primo(int inicio) {
  if (inicio <= 1)  
  {
    return false;
  }
  else
  {
    for (int cont = 2; cont < inicio; cont++) {
      if (inicio % cont == 0)
      {
        return false;
      }
    }
    return true;
  }
}

int num_primos(int n1, int n2) {

int contagem = 0;

if (n1 > n2) {
int inicio = n2;
int fim = n1;

for (inicio ; inicio <= fim ; inicio++) {
    if (eh_primo(inicio)) {
        contagem++;
    }
  }
}

else if (n2 > n1) {
int inicio = n1;
int fim = n2;
bool primo = true;

for (inicio ; inicio <= fim ; inicio++) {
    if (inicio <= 1) {
        primo = false;
    }
    for (int cont = 2 ; cont < inicio ; cont++) {
        if (inicio % cont == 0) {
            primo = false;
        }
    }
    if (primo == true) {
    contagem++;
        }
    }
}

return contagem;
}
