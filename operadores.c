#include <stdio.h>

int main() {
    int numero1, numero2, resultado;

    printf("digite um numero: ");
    scanf("%i", &numero1);

    printf("digite outro numero: ");
    scanf("%i", &numero2);

    resultado = numero1 + numero2;

    printf("O resultado entre %i e o numero %i é %i\n", numero1, numero2, resultado);
        
        return 0;
}
