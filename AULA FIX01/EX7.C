 /*
nome..: KAIO GABRIEL DA SILVA RAMPAZO
turma..:EC41A-C11
data..: 08/04/2025
Enunciado:....FIX01_EX07: Faça um programa em Linguagem C para calcular a média ponderada de três notas de um
aluno considerando os pesos 2, 3 e 5, respectivamente para a primeira, segunda e terceira nota.
*/
 
#include <stdio.h>

int main(){
    // DECLARAÇAO DA VARIAVEIS
    float nota1 = 0,
          nota2 = 0,
          nota3 = 0,
          peso1 = 2,
          peso2 = 3,
          peso3 = 5,
          res = 0;
           
    // entrada
    printf("Calculando as Medias das Notas\n");
    printf("| digite a sua primeira nota..:");
    scanf("%f", &nota1);
    printf("\n| digite a sua segunda nota..:");
    scanf("%f", &nota2);
    printf("\n| digite a sua terceira nota..:");
    scanf("%f", &nota3);

    //processor
    res = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / ( peso1 + peso2 + peso3 );
    
    // saida
    printf("\n|... Os calculos das suas notas são..: %6.2f", res);


    return 0;
}