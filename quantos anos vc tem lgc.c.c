/*
nome:.... KAIO GABRIEL DA SILVA RAMPAZO
turma:.... EC41A-C11
data:.... 07/04/2025
Enunciado:.... Faça um programa em Linguagem C que peça o ano de nascimento do usuário e apresente sua provável idade”.
*/

#include <stdio.h>

int main(){
    
    // declarando variaveis
    int ano = 0,
        atual = 2025,
        res = 0;
    // entrada
    printf("Em que ano voce nasceu \n");
    scanf("%d", &ano);
    
    // processamento
    
    res = atual - ano;
    
    //saida
    printf("entao voce tem %d de idade?", res);
    
    
    return 0;
}