#include <stdio.h>

int main(void) {
  int valor, n_valor, cem, cinquenta, dez, cinco, um;
  printf("Qual o valor do saque?\n");
  scanf("%d", &valor); 

  if (valor >= 10 && valor <= 600){
    printf("Valor aceito\n");
  }else{
    printf("Valor não aceito\n");
  }
  n_valor = valor;
  if(n_valor < 100 && n_valor >= 50){
    cinquenta = n_valor / 50;
    n_valor = n_valor - 50;
    printf("Notas de 50: %d\n", cinquenta);
    
  }else{
  
  if(n_valor < 50 && n_valor >= 10){
    dez = n_valor / 10;
    printf("Notas de 10: %d\n", dez); 
    dez = dez * 10;
    n_valor = n_valor - dez; 
  }
  }
  if(n_valor < 10 && n_valor >= 5){
    cinco = n_valor / 5;
    printf("Notas de 5: %d\n", cinco);
    cinco = cinco * 5;
    n_valor = n_valor - cinco;
  }
  
  if(n_valor < 5 && n_valor >= 1){
    um = n_valor / 1;
    printf("Notas de 1: %d\n", um);    
  }else{ 
    
  if(valor >= 100 && valor < 600){
    cem = valor / 100;
    printf("Notas de 100: %d\n", cem); 
    cem = cem * 100;
    valor = valor - cem; 
    n_valor = valor;
  } 
  
  if(n_valor >=50 && n_valor < 100){
    cinquenta = n_valor / 50;
    n_valor = n_valor - 50;
    printf("Notas de 50: %d\n", cinquenta);
     }
  
  
  if(n_valor >= 10 && n_valor < 50){
    dez = n_valor / 10;
    printf("Notas de 10: %d\n", dez); 
     dez = dez * 10;
    n_valor = n_valor - dez; 
  }
  
  if(n_valor >= 5 && n_valor < 10){
    cinco = n_valor / 5;
    printf("Notas de 5: %d\n", cinco);
    cinco = cinco * 5;
    n_valor = n_valor - cinco;
   }       
  if(n_valor >= 1 && n_valor < 5){
    um = n_valor / 1;
    printf("Notas de 1: %d\n", um);
  }      
        
  } 
  return 0;
}