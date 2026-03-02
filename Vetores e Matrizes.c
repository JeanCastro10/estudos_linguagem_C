#include <stdio.h>

int main (){

int index;

char * nomesalunos[3][3] = {
{"Jean","portugues: 30","matematica = 50"},
{"Tiffany", "Portugues: 30", "Matematica 60"},
{"Juan", "portugues: 50", "matematica: 30"}
};
 
printf("Digite o numero do aluno para ver as notas...\n");
printf("Jean: digite - 0 \n");
printf("Tiffany: digite - 1 \n");
printf(":Juan: digite - 2 \n");
scanf("%d", &index);



if (index >= 0 && index <= 2 )
{
    printf ("As nota do aluno(a) %s : %s , %s \n", nomesalunos[index][0], nomesalunos[index][1], nomesalunos[index][2]);

}else {
    
    printf("digite um numero valido!");
}

    return 0;
}