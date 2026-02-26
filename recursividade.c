#include <stdio.h>

void recurnsive (int numero){
    if (numero > 0)
    {
        printf("%d", numero);
        recurnsive (numero - 1);
    }
}

int main () {
    int contagem = 10;
    printf("contagem regressiva\n");
    recurnsive (contagem);
    return 0;
}