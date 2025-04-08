/*
nome:.... KAIO GABRIEL DA SILVA RAMPAZO
turma:.... EC41A-C11
data:.... 08/04/2025
Enunciado:...FIX01_EX03: Faça um programa em Linguagem C que peça uma temperatura em graus 
célsius e apresente seu respectivo valor em fahrenheit. O cálculo de conversão é: F = (9 * C / 5) + 32
*/
#include <stdio.h>

int main(){
    
    //declaraçao de variaveis
    printf("Hello World");
    float cell = 0,
        farin = 0;

   // entrada
   printf("ou, me passa um valor em celsius");
   scanf("%f", &cell);
   
   //processamento
   farin = (9 * cell / 5) + 32;
   
   //saida
   printf (" aqui o valor do Fahrenheit = %.2f", farin);
   
   
    return 0;
}

