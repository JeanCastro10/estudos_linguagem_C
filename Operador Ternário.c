#include <stdio.h>
int main(int argc, char const *argv[])
{
    int idade;
    int resultado;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    resultado = (idade >= 18) ? 1 : 0;
    if (resultado == 1)
    {
        printf("Voce e maior de idade\n");
    }
    else
    {
        printf("Voce e menor de idade\n");
    }
    
    return 0;
}
