
#include "functions.h"

int menor(int vet[], int n){

  int m=vet[n];

  for (int i=0;i<n;i++) {

    if (vet[i]<m)
      vet[i]=m;
  
  }
    return m;
}
