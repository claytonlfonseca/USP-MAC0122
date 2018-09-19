#include <stdio.h>
#define LIM 500

/*O que significa <stdio.h> e LIM, qual a diferença de usar o valor direto na variável ?*/

int main(){
  char texto[LIM];
  printf("Digite uma frase:");
  fgets(texto,LIM-1,stdin);
  printf("%s\n", texto);

  return 0;
}

 