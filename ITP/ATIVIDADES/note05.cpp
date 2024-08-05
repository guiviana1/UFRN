int fatorial(int n) {
  
  int fatn;

  if (n <= 1) {
    return 1;
    }
  else {
    fatn = n * fatorial(n-1);
    }

  return fatn;
}

int produtorio(int p1, int p2 = 1) { // 10, 2

  int produt;

  if (p1 < p2) {
    return 1;
  }
  if (p2 == 1) {
    produt = fatorial(p1);
  }
  else {
    produt = p2;
    for (p2 ; p2 < p1 ; p2++) {
        produt = produt*(p2 + 1); 
    }
  }
  return produt;
}

int num_combinacoes (int tam, int quant) {
  return produtorio(tam, tam - quant + 1) / produtorio(quant);
}