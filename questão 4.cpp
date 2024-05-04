#include <stdio.h>

int main(void) {
  char nome;
    
  printf("Digite uma letra: ");
  scanf("%c", &nome);

  if(nome == 'a' || nome == 'e' || nome == 'i' || nome == 'o' || nome == 'u'){
      printf("Sua letra %c é uma vogal", nome);
  }else{
      printf("Sua letra %c é um consoante", nome);
  }
  return 0;
    
}