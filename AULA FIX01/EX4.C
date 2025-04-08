 /*
nome..: KAIO GABRIEL DA SILVA RAMPAZO
turma..:EC41A-C11
data..: 08/04/2025
Enunciado:....FIX01_EX04: Elabore um programa em Linguagem C que leia o raio de uma circunferência,
calcule e apresente sua área.
*/
 
#include <stdio.h>

int main(){
    // DECLARAÇAO DA VARIAVEIS
    float raio = 0,
          area = 0,
          pi = 3.14;
           
    // entrada
    printf("digite um valor de um raio..:");
    scanf("%f", &raio);

    //processor
    area =  pi * raio * raio;
  
    // saida
    printf("a área do círculo será...: %10.2f", area);


    return 0;
}