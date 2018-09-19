#include <stdio.h>

int main(){
    char texto[500];
    float media=5.5;

    printf("Média: %2.f\n",media);

    sprintf(texto,"Media (formatada dentro de um string): %2f\n",media);
    printf("%s",texto);

    return 0;
}