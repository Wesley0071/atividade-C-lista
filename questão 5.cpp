#include <stdio.h>

int main(void) {
  int num1, num2, num3;

  printf("Digite um número: ");
  scanf("%d", &num1);
  
  printf("Digite outro número: ");
  scanf("%d", &num2);
  
  printf("Digite maiis um número: ");
  scanf("%d", &num3);

if(num1 > num2 && num1 > num3){
    printf("maior numero é %d", num1);
}else{
   if(num2 > num1 && num2 > num3){
      printf("Maior numero é %d", num2);
   }else{
     printf("Maior numero é %d", num3);
   }

}  
  
  return 0;
}