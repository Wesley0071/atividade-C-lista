#include <stdio.h>

int main(void) {
  float kgMorango,kgMaca, calculoMorango, calculoMaca, valortotal, kgtotal;
  
  printf("Escreva quantos quilos de morango irá levar: \n");
  scanf("%f", &kgMorango);

  printf("Escreva quantos quilos de maçã irá levar: \n");
  scanf("%f", &kgMaca);

  if(kgMorango <= 5){
    calculoMorango = kgMorango * 2.50;
  }else{
    if(kgMorango > 5 && kgMorango <= 8){
      calculoMorango = kgMorango * 2.20;
     }
    }  
  if(kgMaca <= 5){
    calculoMaca = kgMaca * 1.80;
  }else{
    if(kgMaca > 5 && kgMaca <= 8){
      calculoMaca = kgMaca * 1.50;
    }    
  }

  kgtotal = kgMaca + kgMorango;
  valortotal = calculoMorango + calculoMaca;

  if(kgtotal > 8 || valortotal > 25){
    valortotal = valortotal - (valortotal * 10/100);
  }

  printf("O valor total da compra é: %.2f", valortotal);  
  
  return 0;
}