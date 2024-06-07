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

int num_combinacoes(int n1, int n2) {
  int nc;
  nc = fatorial(n1) / (fatorial(n2) * fatorial(n1-n2));
  return nc;
}
