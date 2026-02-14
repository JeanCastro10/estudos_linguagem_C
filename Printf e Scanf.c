#include <stdio.h>

int main()
{
    char nome[30];
    int idade;
    float altura;

    printf("Qual seu nome? ");
    scanf("%s", nome);

    printf("Qual sua idade? ");
    scanf("%i", &idade);

    printf("Qual sua altura?");
    scanf("%f", &altura);

    printf("Seu nome é: %s\n", nome);
    printf("sua idade é: %i\n", idade);   
    printf("Sua altura é: %.2f\n", altura);

    return 0;
}
