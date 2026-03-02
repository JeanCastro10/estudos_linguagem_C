#include <stdio.h>

void recursive (int numero){
    if (numero >= 0)
    {
        printf("%d\n", numero);
        recursive (numero - 1);
        
    }
}

int main () {
    int contagem = 10;
        printf("contagem regressiva\n");
        recursive (contagem);
   
    return 0;
}