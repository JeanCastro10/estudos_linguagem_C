#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int opcao;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Configuracoes do jogo\n");
    printf("3 - sair\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);
    switch (opcao){
    case 1:
   srand(time(0));
    numeroSecreto = rand() % 10;
    printf("Tente adivinhar o numero secreto entre 0 e 9.\n");    
        scanf("%d", &palpite);
    if (palpite == numeroSecreto){
            printf("O numero secreto era: %d\n", numeroSecreto);
            printf("Parabens! Voce acertou o numero secreto!\n");
        }
    else
        {   printf("O numero secreto era: %d\n", numeroSecreto);
            printf("Que pena! você errou!\n");
        }
        break;
    case 2:
        printf("Abrindo configuracoes do jogo...\n");
        break;
    case 3:
        printf("Saindo do jogo...\n");
        break;

    default:
        printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
        break;
    }




    return 0;
}
