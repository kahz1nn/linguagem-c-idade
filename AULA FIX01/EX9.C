 /*
nome.....: KAIO GABRIEL DA SILVA RAMPAZO
turma....: EC41A-C11
data.....: 08/04/2025
Enunciado: FIX01_EX09: Elabore um programa em Linguagem C para obter do usuário a
velocidade em quilômetros por hora (km/h) e informar a mesma velocidade em metros por segundo (m/s).
*/
 
#include <stdio.h>

int main(){
    // DECLARAÇAO DA VARIAVEIS
    float km  = 0,
          res = 0,
          ms = 3.6;
    // entrada
    printf("Calculando as rotas em quilômetros por horas");
    printf("\n| digite km rodado..:");
    scanf("%f", &km);
    
    //processor
    res = km / ms;
    
    // saida
    printf("\n|... Calculo em velocidade em metros por segundo (m/s)...: %0.0f", res);

    return 0;
}