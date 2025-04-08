 /*
nome..: KAIO GABRIEL DA SILVA RAMPAZO
turma..:EC41A-C11
data..: 08/04/2025
Enunciado:....FIX01_EX05: Elabore um programa em Linguagem C que calcule o preço de venda de um carro.
 O preço de venda é formado pelo preço da montadora, mais 15% de lucro, mais 11% de IPI, mais 17% de ICMS. 
 As porcentagens são sobre o preço da montadora, que é lido do usuário. Apresente na tela o preço final, 
 o lucro e o valor dos impostos. 
Tente apresentar todos os dados no formato de uma tabela, com valores alinhados.
*/
 
#include <stdio.h>

int main(){
   // DECLARAÇAO DA VARIAVEIS
     float vl_montadora = 0,
           vl_final = 0,
           vl_ipi = 0,
           vl_icms = 0,
           vl_lucro = 0;

   // entrada
    printf("Calculos dos Malores na Montadoras \n");
    printf("digite o valor:");
    scanf("%f", &vl_montadora);

   //processor
   vl_ipi = vl_montadora * 0.11;
   vl_icms = vl_montadora * 0.17;
   vl_lucro = vl_montadora * 0.15;
   vl_final = vl_ipi + vl_icms + vl_lucro + vl_montadora;


   // saida
   printf("\n| IPI.........: R$ %10.2f |", vl_ipi);
   printf("\n| ICMS........: R$ %10.2f |", vl_icms);
   printf("\n| Lucro.......: R$ %10.2f |", vl_lucro);
   printf("\n| PREÇO FINAL.: R$ %10.2f |", vl_final);


   return 0;
}