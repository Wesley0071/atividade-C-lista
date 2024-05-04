#include <stdio.h>

int main(void) {
  char turno, cont;
  do { 
  printf("Em que turno você estda? digite M para matutino, v para vespertino ou n para noturno: \n");
  scanf("%c", &turno);
  getchar();
 if(turno == 'm' || turno == 'M'){
    printf("Bom diaaa!");
    
  }else{
    if(turno == 'v' || turno == 'V'){
      printf("Boa tardeee!");
    }else{
      if(turno == 'n' || turno == 'N'){
        printf("Boa noiteee!");
      }else ;{
        printf("\nvalor inválido! digite M, V ou N\n");
      }
    }
  }
    printf("\nQuer continuar? S/N: ");
    scanf("%c", &cont);
    getchar();
    
  }while(cont == 's' || cont == 'S');  
  
  
  return 0;
}