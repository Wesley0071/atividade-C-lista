#include <stdio.h>

int main(void) {
  int num1, num2, num3;

  printf("digite um numero: ");
  scanf("%d", &num1);

  printf("digite outro numero: ");
  scanf("%d", &num2);

  printf("digite mais um numero: ");
  scanf("%d", &num3);

  if(num1 < num2 && num2 < num3){
      printf("%d, %d, %d", num1, num2, num3);
  }else{
     if(num3 < num1 && num1 < num2){
       printf("%d,%d,%d", num3, num1, num2);
     }else{
       if(num2 < num3 && num3 < num1){
       printf("%d,%d,%d", num2, num3, num1);
       }else{
         if(num1 < num3 && num3 < num2){
           printf("%d,%d,%d", num1, num3, num2);
         }else{
            if(num2 < num1 && num1 < num3){
              printf("%d,%d,%d", num2, num1, num3);
              }else{
                  printf("%d,%d,%d", num3, num2, num1);
                }
              }
            }     
         }
       }
     
  
  return 0;
}
