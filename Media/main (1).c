#include <stdio.h>

int main()
{
    // Faça um programa em C que peça ao utilizador dois números entre 0 e 20 e apresente a sua média.
   //Caso a média seja maior ou igual a 10 apresente a mensagem "Aprovado", caso contrário apresente a mensagem "Reprovado".
   
   int num1, num2;
   int *pt1, *pt2;
   float media;
   
   pt1 = &num1;
   pt2 = &num2;
   
   printf("Digite um número entre 0 e 20: ");
   scanf("%d", pt1);
   
   if(*pt1 > 20 || *pt1 < 0) {
       printf("Número inválido.");
       return 1;
   }
   printf("Digite outro número entre 0 e 20: ");
   scanf("%d", pt2);
   
   if (*pt2 > 20 || *pt2 < 0) {
        printf("Número inválido.");
        return 1;
   }
   
   media = (*pt1 + *pt2) / 2.0;

   if(media >=10) {
       printf("A média dos 2 números digitados é %.2f\n", media);
       printf("Aprovado!");
   }
   else {
       printf("A média dos 2 números digitados é %.2f\n", media);
       printf("Reprovado!");
   }
   
    return 0;
}