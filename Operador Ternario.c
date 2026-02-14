#include <stdio.h>
int main()
{
    int idade;
    int resultado;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    resultado = (idade >= 18) ? 1 : 0;
    if (resultado == 1)
    {
        printf("Voce é maior de idade\n");
    }
    else
    {
        printf("Voce é menor de idade\n");
    }
    
    return 0;
}
