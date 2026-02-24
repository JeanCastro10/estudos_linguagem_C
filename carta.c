#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

int resultado1, resultado2;
char primeiro_atributo, segundo_atributo;
int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;
//gerar numeros aleatórios para os atributos
srand(time(0));
ataque1 = 1;
ataque2 = 0;
defesa1 = 0;
defesa2 = 1;        
recuo1 = 1;
recuo2 = 0;
// inicio do programa
printf("bem vindo ao jogo\n");
printf("Escolha o primeiro atributo\n");
printf("A - ataque\n");
printf("B - defesa\n");
printf("C - recuo\n");

printf("escolha a comparação ");
scanf(" %c", &primeiro_atributo);

switch (primeiro_atributo)
{
case 'A':
case 'a': 
    printf("Você escolheu ataque: ");
    resultado1 = (ataque1 > ataque2) ? 1 : 0;
    break;


case 'B':
case 'b':
    printf("Você escolheu defesa: ");
    resultado1 = (defesa1 > defesa2) ? 1 : 0;
    break;

case 'C':
case 'c':
    printf("Você escolheu recuo: ");
    resultado1 = (recuo1 > recuo2) ? 1 : 0;     
    break;

default:
    printf("Opção inválida!\n");
    break;
}

printf("Escolha o segundo atributo\n");
printf("A - ataque\n");
printf("B - defesa\n"); 
printf("C - recuo\n");
printf("escolha a sua comparação:\n");
scanf(" %c", &segundo_atributo);


if (primeiro_atributo == segundo_atributo) {
    printf("Você escolheu o mesmo atributo\n");

} else {
switch (segundo_atributo)
{case 'A':
case 'a':
    printf("Você escolheu ataque: ");
    resultado2 = (ataque2 > ataque1) ? 1 : 0;
    break;
case 'B':
case 'b':   
    printf("Você escolheu defesa: ");
    resultado2 = (defesa2 > defesa1) ? 1 : 0;
    break;          
case 'C':
case 'c':   
    printf("Você escolheu recuo: ");
    resultado2 = (recuo2 > recuo1) ? 1 : 0;     
    break;
default:
    printf("Opção inválida!\n");
    break;
}}

if (resultado1 && resultado2) {
    printf("Parabéns, você venceu!\n");
} else if (!resultado1 && !resultado2) {
    printf("Empate!\n");
} else {
    printf("Você perdeu!\n");
}
    return 0;   
}

