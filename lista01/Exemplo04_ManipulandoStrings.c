#include <stdio.h>
#include <string.h>

/*Não Funcionou, ver motivo*/

int main(){
    char firstname[100]="Paulo";
    char lastname[100]="Miranda";
    char name[100];

    printf("%d\n",strlen(firstname)); /* Imprime 5. */
    printf("%d\n",strlen(lastname)); /* Imprime 7. */
    strcpy(name, firstname); /*Copia firstname.*/
    strcat(name, " "); /*Adiciona Espaço em branco.*/
    strcat(name, lastname); /*Adiciona lastname.*/
    printf("%d\n",strlen(name)); /*Imprime 13.*/
    printf("name: %s\n",name); /*Imprime nome completo.*/
    return 0;

}