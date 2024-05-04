#include <stdio.h>

int main(void) {
  float nota1, nota2, media_notas;
  
  printf("Digite a primeira nota: \n");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: \n");
  scanf("%f", &nota2);
  
  media_notas = (nota1 + nota2)/2;
  
  if(media_notas >= 9 && media_notas <= 10){
    printf("Notas: %.2f e %.2f\n", nota1, nota2);
    printf("Médias das notas %.2f\n", media_notas);
    printf("Conceito A\n");
    printf("Aprovado");
  }else{
    if(media_notas >= 7.5 && media_notas < 9){
      printf("Notas %.2f e %.2f\n", nota1, nota2);
      printf("Média das notas %.2f\n", media_notas);
      printf("Conceito B\n");
      printf("Aprovado");
    }else{
      if(media_notas >= 6 && media_notas < 7.5){
        printf("Notas %f e %.2f\n", nota1, nota2);
        printf("Média das notas %.2f\n", media_notas);
        printf("Conceito C\n");
        printf("Aprovado");
      }else{
        if(media_notas >= 4 && media_notas < 6){
          printf("Notas %.2f e %.2f\n", nota1, nota2);
          printf("Média das notas %.2f\n", media_notas);
          printf("Conceito D\n");
          printf("Reprovado");
        }else{
          printf("Notas %.2f e %.2f\n", nota1, nota2);
          printf("Média das notas %.2f\n", media_notas);
          printf("Conceito E\n");
          printf("Reprovado");
        }
      }
    }
  }
  return 0;
 
}