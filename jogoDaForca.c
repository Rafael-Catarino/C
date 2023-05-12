#include <stdio.h>
#include <string.h>

int main()
{
  char palavraSecreta[20];

  sprintf(palavraSecreta, "MELANCIA");

  int acertou = 0;
  int enforcou = 0;

  do {
    char chute;
    printf("Informe uma letra: ");
    scanf ("%c", &chute);

    /*A função strlen se encontra demtro da biiblioteca <string.h>. A função retorna o tamanho de array do tipo CHAR passado como parametro.*/
    for(int i = 0; i < strlen(palavraSecreta); i++) {
      if (palavraSecreta[i] == chute) {
        printf("acertei");
      }
    }

  } while(!acertou && !enforcou);
}
