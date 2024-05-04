#include <stdio.h>
#include <math.h>

int main(void) {
  
  float num1, num2, num3;
  int escolha;
  
  printf("Digite um numero\n");
  scanf("%f", &num1);

  printf("Digite outro numero\n");
  scanf("%f", &num2);
  
  printf("qual opção deseja?\n 1-Adição\n 2-Subtração\n 3-Multiplicação\n 4-Divisão\n");
  scanf("%d", &escolha);
  
  switch (escolha){
    case 1:    
     num3 = num1 + num2;
    break;
  case 2:    
    num3 = num1 - num2;
    break;
  case 3:    
    num3 = num1 * num2;
    break;
  case 4:
    if(num1 < num2){
      num3 = num2 / num1;
    }else{
      num3 = num1 / num2;
    }   
    break;
  default:
    printf("Opção invalida");
    return 0;
  }

  printf("O resultado é: %1.f\n", num3);
  
  if((int)num3 % 2 == 0){
    printf("O resultado é par\n");
  }else{
    printf("O resultado é impar\n");
  }

  if(num3 < 0){
    printf("O Resultado é negativo\n");
  }else{
    printf("O Resultado é positivo\n");
  }

  if(num3 == (int)num1){
    printf("O Resultado é inteiro\n");
  }else{
    printf("O Resultado é decimal\n");
  }
  
  return 0;
}