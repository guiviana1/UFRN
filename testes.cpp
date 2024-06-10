bool esta_ordenado(int tamanho, int sequencia[]) {    //é melhor trabalhar em questões assim com casos em exceção. Se encontrar o false, cabouse ai.
  
  sequencia[tamanho];
  bool ordem = true;    //assume que ta ordenado desde o começo
  
  if (tamanho == 1) {
    return true;
  }

  for (int i = 0; i < tamanho - 1; i++) {
    if (sequencia[i] > sequencia[i + 1]) {
      ordem = false;                          //se encontrar um desordenação, marca false e nunca mais vai ser marcado true
    }                                        //se fosse ao contrario (encontrar uma ordenação), ele poderia encontrar uma desordem, marcar com false, mas 
  }                                          //depois que ele encontrasse um ordenação dnv, ia marcar como true e adesordem ia passar batido. Portanto, melhor
return ordem;                                //trabalhar com a exceção (encontrar a desordem).
}