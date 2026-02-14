#include <stdio.h>
#include <stdlib.h>
#include <time.h>   

int main()
{
    int jogador, computador;
    srand(time(0));
    computador = rand() % 3 + 1;
    printf("Computador escolheu: %d\n", computador);

    printf("Escolha: 1 - Pedra, 2 - Papel, 3 - Tesoura\n");
    scanf("%d", &jogador);

switch (jogador)
{
case 1:
    printf("Jogador escolheu: Pedra\n");
    break;
case 2:
    printf("Jogador escolheu: Papel\n");
    break;
case 3:
    printf("Jogador escolheu: Tesoura\n");
    break;
default:
    printf("Jogador escolheu: Inválido\n");
    break;
}
switch (computador)
{
case 1:
    printf("Computador escolheu: Pedra\n");
    break;
case 2:
    printf("Computador escolheu: Papel\n");
    break;
case 3:
    printf("Computador escolheu: Tesoura\n");
    break;
default:
    printf("Computador escolheu: Inválido\n");
    break;
} if (
    (jogador == 1 && computador == 3) ||
    (jogador == 2 && computador == 1) ||
    (jogador == 3 && computador == 2)) {
    printf("Jogador venceu!\n");

} else if (jogador == computador) {
    printf("Empate!\n");
} else{
    printf("Computador venceu!\n");
}


    return 0;
}
