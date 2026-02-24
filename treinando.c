#include <stdio.h>

int main() {

    int cardapio;
    int bebidas;
    char opcao;

    printf("===== FAÇA SEU PEDIDO =====\n\n");

    // ----- LANCHES -----
    printf("==== LANCHES ====\n");
    printf("1 - Cachorro Quente\n");
    printf("2 - X-Salada\n");
    printf("3 - X-Bacon\n");
    printf("4 - Bauru\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &cardapio);

    switch (cardapio) {
        case 1:
            printf("Voce escolheu Cachorro Quente\n");
            break;
        case 2:
            printf("Voce escolheu X-Salada\n");
            break;
        case 3:
            printf("Voce escolheu X-Bacon\n");
            break;
        case 4:
            printf("Voce escolheu Bauru\n");
            break;
        default:
            printf("Opcao de lanche invalida!\n");
            return 0; // encerra se lanche for inválido
    }

    // ----- PERGUNTA SOBRE BEBIDA -----
    printf("\nDeseja adicionar uma bebida? (s/n): ");
    scanf(" %c", &opcao);  // espaço antes do %c evita erro com ENTER

    if (opcao == 's' || opcao == 'S') {

        printf("\n==== BEBIDAS ====\n");
        printf("1 - Refrigerante\n");
        printf("2 - Suco\n");
        printf("3 - Agua\n");
        printf("4 - Cerveja\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &bebidas);

        switch (bebidas) {
            case 1:
                printf("Voce escolheu Refrigerante\n");
                break;
            case 2:
                printf("Voce escolheu Suco\n");
                break;
            case 3:
                printf("Voce escolheu Agua\n");
                break;
            case 4:
                printf("Voce escolheu Cerveja\n");
                break;
            default:
                printf("Opcao de bebida invalida!\n");
        }

    } 
    else if (opcao == 'n' || opcao == 'N') {
        printf("Voce optou por nao adicionar bebida.\n");
    } 
    else {
        printf("Opcao invalida! Digite apenas s ou n.\n");
    }

    printf("\nPedido finalizado! Obrigado.\n");




    printf("seu pedido foi registrado com sucesso!\n");
    printf("Aguarde um momento enquanto preparamos seu pedido...\n");

    return 0;
}
