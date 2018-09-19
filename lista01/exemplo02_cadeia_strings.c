#include <stdio.h>

int main(){
    char texto[500];
    int c,i=0;

    while(1){
        c=getchar();/*lê o caracter seguinte*/
        if (c==EOF || c=='\n')
            break;
    texto[i]=(char)c;
    i++;
    }
    texto[i]='\0';
    printf("texto: %s\n",texto);
    return 0; /* Qual a diferença de return 0 e return 1 ? */
}