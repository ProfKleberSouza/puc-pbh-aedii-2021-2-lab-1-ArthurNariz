#include <stdio.h>
#include "functions.h"

int main() {

   int n,x,vet[n];

   scanf("%d",&n);

  for (int i=0;i<n;i++)
   scanf("%d",&vet[i]);

   x = menor(vet, n);

  printf("MENOR = %d",x);

  return(0);
}