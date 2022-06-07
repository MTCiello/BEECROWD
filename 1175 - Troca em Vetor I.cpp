#include <stdio.h>
#define TAM 20

int main(){
  int  n[TAM], i,f,aux; 

  //entrada
  for(i=0; i<TAM; i++ ){
    scanf("%d",&n[i]);
  }

  f = TAM - 1; 

  for(i=0; i<TAM/2; ){
    aux = n[f]; 
    n[f] = n[i]; 
    n[i] = aux; 
    i++;
    f--; 
  }

  for(i=0; i<TAM; i++ ){
    printf("N[%d] = %d\n",i,n[i]);
  }
  return 0;
}
