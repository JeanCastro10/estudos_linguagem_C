#include <stdio.h>

int main() {
    float n1, n2, n3, nota;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    nota = (n1 + n2 + n3) / 3;

    if (nota >= 7) {
        printf("Sua nota foi %.2f, Parabens!! voce passou de ano!\n", nota);
    }
    else if (nota >= 5 && nota <= 6.9) {
        printf("Sua nota foi %.2f, voce esta de recuperacao\n", nota);
    }
    else {
        printf("Sua nota foi %.2f, voce foi reprovado!\n", nota);
    }

    return 0;
}
