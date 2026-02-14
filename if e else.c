#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero1;
    int numero2;
    int resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    if (numero1 > numero2)
    {
        printf ("o numero %d e maior que o numero %d\n", numero1, numero2);
    }
    else if (numero1 == numero2)
    {
        printf ("o numero %d é igual ao numero %d\n", numero1, numero2);
    }
    else
    {
        printf ("o numero %d é menor que o numero %d\n", numero1, numero2);
    }

    resultado = numero1 + numero2;
    if ((numero1 + numero2) % 2 == 0)
    printf ("----A soma entre %d e %d é %d e o numero é par----\n", numero1, numero2, resultado);
    else
    {
        printf ("----A soma entre %d e %d é %d e o numero é impar----\n", numero1, numero2, resultado);
    }
    

    
    return 0;
}
