#include <stdio.h>

int main(void) {
  int numero, soma, dezena, unidade;
  
  printf("Digite um numero inteiro entre 0 e 1000: \n");
  scanf("%d", &numero);

  if(numero < 0 || numero > 1000){
    printf("Numero invalido");
    return 0;
  }
  if(numero < 100 && numero >= 10){
    dezena = numero / 10;
    printf("%d dezena%s e", dezena, dezena > 1 ? "s" : "");
    dezena = dezena * 10;
    numero = numero - dezena; 
  }
  if(numero < 10 && numero > 0){
    unidade = numero;
    printf("%d unidade%s", unidade, unidade > 1 ? "s" : "");
  }else{
    if(numero > 0 && numero <= 1000){
      soma = numero / 100;
      printf("%d centena%s,", soma, soma > 1 ? "s" : "");
      soma = soma *100;
      numero = numero - soma;
    }

    if(numero >= 10 && numero < 100){
      dezena = numero / 10;
      printf("%d dezena%s e ", dezena, dezena > 1 ? "s" : "");
      dezena = dezena * 10;
      numero = numero - dezena;
    }

    if(numero > 0 && numero < 10){
      unidade = numero;
      printf("%d unidades%s", unidade, unidade > 1 ? "s" : "");
    }
  }
  
  
  
  return 0;
}