#include <stdio.h>

int main(void) {
  int val1, val2, val3;
  printf("Digite o valor do produto 1:R$");
  scanf("%d",&val1);

  printf("Digite o valor do produto 2:R$");
  scanf("%d",&val2);    

  printf("Digite o valor do produto 3:R$");
  scanf("%d",&val3);

  if (val1 < val2 && val1 < val3){
    printf("produto 1 melhor para compra, pois é o mais barato. valor: R$%d", val1);
  }else{
    if(val2 < val1 && val2 < val3){
      printf("produto 2 melhor para compra, pois é o mais barato. valor: R$%d", val2);
    }else
      printf("produto 3 melhor para compra, pois é o mais barato. valor: R$%d", val3);
  }
  

  
  return 0;
}