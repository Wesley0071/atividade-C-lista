#include <stdio.h>
#include <math.h>

int main(){
  int numero;

  printf("Escreva qualquer numero positivo, negativo ou zero. ");
  scanf("%d", &numero);

  if (numero < 0){
    printf("Numero %d e negativo", numero);

  }
  else{
    if(numero == 0 ){
      printf("numero e zero");

    }
    else {
      printf ("Numero %d e positivo", numero);
    }
  }

}