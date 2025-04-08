/*
nome:.... KAIO GABRIEL DA SILVA RAMPAZO
turma:.... EC41A-C11
data:.... 07/04/2025
Enunciado:....FIX01_EX02: Faça um programa em Linguagem C que peça a idade do usuário e, em seguida, 
digite a mensagem: “Legal! Você tem *idade* anos!”.
*/

#include <stdio.h>

int main(){
    
    //declaraçao de variaveis
    int idade = 0;
    
    //entrada
    printf("Quantos anos voce tem?..:\n");
    scanf("%d", &idade);
    printf("serio? nem parece.:D\n");

    //processamento
    
    //saida
    printf("legal! Voce tem %d anos!\n", idade);
    printf("interessanten\n");

    return 0;
}