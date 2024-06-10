void conjunto(int &tamanho, int sequencia[]) {
  for (int i = 1; i < tamanho; i++) {
    for (int j = 0; j < i; j++) {
      if (sequencia[i] == sequencia[j]) {
        for (int k = i; k < tamanho - 1; k++) {
          sequencia[k] = sequencia[k+1];
        }
        tamanho--;
      }
    }
  }
}