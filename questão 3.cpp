#include <stdio.h>

int main(){

  char sexo;

  printf("Digite seu sexo F/M: ");
  scanf("%c", &sexo);

    if(sexo == 'F' || sexo == 'f'){
    printf("Letra digitada %c, sexo Feminino", sexo);
  }else{ 
    if(sexo == 'M' || sexo == 'm'){
      printf("Letra digitado %c, sexo Masculino", sexo);	
    }else{
      printf("Letra digitado %c, sexo invalido", sexo);
    }

  }


  return 0;

}