void conjunto(int &tamanho, int sequencia[]) {
int a[tamanho];

int n=0;

bool coisa;

for(int i=0; i<tamanho; i++){
  coisa = false;
  for(int j=0; j<tamanho; j++){
    if (sequencia[i] == a[j]){
      coisa = true;
    }
  }
 if (!coisa){
  a[n] = sequencia[i];
  n++;
  }
}
for(int i=0; i<n; i++){
    sequencia[i] = a[i];
  }
  tamanho = n;
}



ou



void conjunto(int &tamanho, int sequencia[]) {
  std::unordered_set<int> a;
  for(int i=0;i<tamanho;i++){
    if(a.find(sequencia[i])==a.end()){
      a.insert(sequencia[i]);
    }
    else{
      for(int j=i;j<tamanho-1;j++){
        sequencia[j]=sequencia[j+1];
      }
      i--;
      tamanho=tamanho-1;
    }
  }
}
