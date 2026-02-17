#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int jogador, computador, resultado;
    char opcao;
    computador = rand() % 100 + 1; // gera um número aleatório entre 1 e 100

    printf("===== JOGO DE ADIVINHAÇÃO =====\n\n");
    printf("Tente adivinhar o número que o computador escolheu (entre 1 e 100)\n");
    printf("escolha um número: ");
        scanf("%d", &jogador);
    printf("Que tipo de comparação deseja fazer?\n");
    printf("a - Verificar se o número é maior que o escolhido pelo computador\n");
    printf("b - Verificar se o número é menor que o escolhido pelo computador\n");
    printf("c - Verificar se o número é igual ao escolhido pelo computador\n");
    printf("Escolha uma opção: ");
        scanf(" %c", &opcao);


    switch (opcao)
    {
    case 'a':
    case 'A':
    resultado = (jogador > computador) ? 1 : 0;
        if (resultado == 1) {
        printf("O número escolhido pelo computador é: %d\n", computador);
        printf("Parabéns! O número é maior que o escolhido pelo computador\n");
        } else {
        printf("O número escolhido pelo computador é: %d\n", computador);
        printf("Voce errou! O número não é maior que o escolhido pelo computador\n"); 
        }
        break;
    case 'b':
    case 'B':
    resultado = (jogador < computador) ? 1 : 0;
        if (resultado == 1) {
            printf("O número escolhido pelo computador é: %d\n", computador);
            printf("Parabéns! O número é menor que o escolhido pelo computador\n");
        } else {
            printf("O número escolhido pelo computador é: %d\n", computador);
            printf("Voce errou! O número não é menor que o escolhido pelo computador\n"); 
        }
        break;
    case 'c':
    case 'C':  
    resultado = (jogador == computador) ? 1 : 0;
        if (resultado == 1){
            printf("O número escolhido pelo computador é: %d\n", computador);
            printf("Parabéns! Você acertou o número escolhido pelo computador\n");
        } else {
            printf("O número escolhido pelo computador é: %d\n", computador);
            printf("Voce errou! O número não é igual ao escolhido pelo computador\n"); 
        }
        break;   
        
        default:
        
            printf("Opção inválida!\n");
        break;
    }

    return 0;
}