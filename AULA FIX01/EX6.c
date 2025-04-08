 /*
nome..: KAIO GABRIEL DA SILVA RAMPAZO
turma..:EC41A-C11
data..: 08/04/2025
Enunciado:....FIX01_EX06: Elabore um programa em Linguagem C para calcular: (a + b)3
*/
 
#include <stdio.h>

int main(){
    // DECLARAÇAO DA VARIAVEIS
    float a = 0,
          b = 0,
          c = 3,
          res = 0;
           
    // entrada
    printf("Vamos elaborar o cubo usando ( a + b )3 \n");
    printf("| primeiro numero..:");
    scanf("%f", &a);
    printf("\n| segundo numero..:");
    scanf("%f", &b);

    //processor
    res =  ( a + b ) * ( a + b ) * ( a + b ) ;
  
    // saida
    printf("\n|... O cubo da soma de ( %0.f + %0.f )3 é...: %0.f", a, b, res);


    return 0;
}