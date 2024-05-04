#include <stdio.h>

int main(void) {
  int semana;
  printf("Qual é o dia da semana:\n 1.Segunda-feira\n 2.Terça-feira\n 3.Quarta-feira\n 4.Quinta-feira\n 5.Sexta-feira\n 6.Sábado\n 7.domingo\n");
  scanf("%d", &semana);
  
  switch (semana) {
    case 1:
      printf("Segunda-feira");
      break;
    case 2:
      printf("Terça-feira");
      break;
    case 3:
      printf("Quarta-feira");
      break;
    case 4:
      printf("Quinta-feira");
      break;
    case 5:
      printf("Sexta-feira");
      break;
    case 6:
      printf("Sábado");
      break;
    case 7:
      printf("Domingo");
      break;
    default:
      printf("Valor inválido");
    } 
  return 0;
}