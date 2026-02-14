#include <stdio.h>
int main()
{
     char produtoA [30] = "produto A";
     char produtoB [30] = "produto B";
     
     unsigned int estoqueA = 1000;
     unsigned int estoqueB = 2500;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;

    double valortotalA;
    double valortotalB;

    int resultadoA;
    int resultadoB;

    printf("produto %s tem o estoque %u e o valor unitario de R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("produto %s tem o estoque %u e valor unitario de R$ %.2f\n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueminimoA;
    resultadoB = estoqueB > estoqueminimoB;
 
    printf("O estoque do %s esta acima do estoque minimo? %u\n", produtoA, resultadoA);
    printf("O estoque do %s esta acima do estoque minimo? %u\n", produtoB, resultadoB);

    return 0;
}
