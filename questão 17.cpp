#include <stdio.h>

int main(void) {
  char resp, vitima, dor, lich, dedo;
  int sorn = 0;
  
  printf("Telefonou para a vítima?\n");
  scanf("%c", &resp);
  if(resp == 's'){
    sorn++;
  }
  getchar();
  
  printf("Esteve no local do crime?\n");
  scanf("%c", &dor);
  if(dor == 's'){
    sorn++;
  }
  getchar();

  printf("Mora perto da vítima?\n");
  scanf("%c", &vitima);
  if(vitima == 's'){
    sorn++;
  }
  getchar();

  printf("Devia para a vítima?\n");
  scanf("%c", &lich);
    
  if(lich == 's'){
      sorn++;
  }
  getchar();

  printf("Já trabalhou com a vítima\n");
  scanf("%c", &dedo);
  if(dedo == 's'){
    sorn++;
    
  }  
  getchar();
  if(sorn == 0){
    printf("inocente");
  }
  if(sorn == 1){
    printf("Inocente");
  }

  if(sorn == 2){
    printf("Suspeito");
  }
  if(sorn == 3 || sorn == 4){
    printf("Cumplice");
  }

  if(sorn == 5){
    printf("Asssaino");
  }
  
  return 0;
}