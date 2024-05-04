#include <stdio.h>

int main(void) {
  float salario, aumento, novo_s;

  printf("Digite o seu salário: ");
  scanf("%f", &salario);

  if (salario <= 280){
    aumento = salario * 0.2;
    novo_s = salario + aumento;
    printf("Seu salario antes do reajuste: R$%.1f", salario);
    printf("\nPercentual de aumento aplicado: 20%\n");    
    printf("Valor aumentado: R$%.1f\n", aumento);
    printf("Novo salário: R$%.1f", novo_s);
  }else{
    if(salario > 280 && salario <= 700){
      aumento = salario * 0.15;
      novo_s = salario + aumento;
      printf("Seu salario antes do reajuste: R$%.1f", salario);
      printf("\nPercentual de aumento aplicado: 15%\n");     
      printf("Valor aumentado: R$%.1f\n", aumento);
      printf("Novo salário: R$%.1f", novo_s);
    }else{
      if(salario > 700 && salario <= 1500){
        aumento = salario * 0.1;
        novo_s = salario + aumento;
        printf("Seu salario antes do reajuste: R$%.1f", salario);
        printf("\nPercentual de aumento aplicado: 10%\n");       
        printf("Valor aumentado: R$%.1f\n", aumento);
        printf("Novo salário: R$%.1f", novo_s);
      }else{
        aumento = salario * 0.05; 
        novo_s = salario + aumento;
        printf("Seu salario antes do reajuste: R$%.1f", salario);
        printf("\nPercentual de aumento aplicado: 5%\n");     
        printf("Valor aumentado: R$%.1f\n", aumento);
        printf("Novo salário: R$%.1f", novo_s);
      }
    }
  }
  
  
  return 0;
}