int conta_caractere(std::string str, char A){
  int count=0;

  for(int i=0; i < str.size(); i++){
    if (tolower(str[i]) == tolower(A)){
      count++;
    }
  }
  return count;
}
