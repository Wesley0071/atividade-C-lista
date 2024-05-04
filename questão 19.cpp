#include <stdio.h>
#include <string.h>

int main(void) {
  float kgcarne, vcarne, vtotal, desc;
  int tcarne;
  char carne[20], pag[20], cartao;
  
  printf("Escolha qual tipo de carne levará\n 1.Filé Duplo\n 2.Alcatra\n 3.Picanha\n");
  scanf("%d", &tcarne);
  

  switch (tcarne){
  
    case 1:
      printf("Quantos quilos de carne levará?\n");
      scanf("%f", &kgcarne);
      if(kgcarne <= 5){
        vcarne = kgcarne * 4.90;
      }else{
        vcarne = kgcarne * 5.80;
      }
      printf("irá pagar no cartão tabajara? \n");
      scanf("%c", &cartao);
      
      getchar();
      
      if(cartao == 's' || cartao == 'S'){ 
         vtotal = vcarne - (vcarne * 0.05);
      }else{
        vtotal = vcarne;
      }
      break;
    
    case 2:
      printf("Qauntos quilos de carne levará?\n");
      scanf("%f", &kgcarne);
      if(kgcarne <= 5){
        vcarne = kgcarne * 5.90;
      }else{
        vcarne = kgcarne * 6.80;
      }
      printf("irá pagar no cartão tabajara? S/N\n");
      scanf("%c", &cartao);
      
      getchar();
      
     if(cartao == 's' || cartao == 'S'){ 
        vtotal = vcarne - (vcarne * 0.05);
     }else{
       vtotal = vcarne;
     } 
    break;
    
    case 3:
      printf("Qauntos quilos de carne levará?\n");
      scanf("%f", &kgcarne);
      if(kgcarne <= 5){
        vcarne = kgcarne * 6.90;
      }else{
        vcarne = kgcarne * 7.80;
      }
      printf("irá pagar no cartão tabajara? 1.Sim 2.Não\n");
      scanf("%c", &cartao);
      
      getchar();
      
     if(cartao == 's' || cartao == 'S'){ 
        vtotal = vcarne - (vcarne * 0.05);
     }else{
       vtotal = vcarne;
     }
    break;
    
    default:
      printf("Opção inválida");
  } 

   if(tcarne == 1){
     strcpy(carne, "Filé Duplo");
   }

   if(tcarne == 2){
     strcpy(carne, "Alcatra");
   }
   if(tcarne == 3)
     strcpy(carne, "Picanha");

   if(cartao == 's' || cartao == 'S'){
     strcpy(pag, "Cartão");
   }else{
     strcpy(pag, "Dinheiro");
   }
    
      

    desc = vtotal - vcarne; 
      
    printf("----------Cupon Fiscal-----------\n tipo de carne: %s \n quantidade: %.2fkg \n preço total: R$%.2f\n Forma de Pagamento %s\n Valor do desconto:R$%.2f\n Total a pagar:R$%.2f", carne, kgcarne, vcarne, pag, desc, vtotal);
 
  
  return 0;
}