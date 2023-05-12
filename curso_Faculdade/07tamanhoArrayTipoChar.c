#include <stdio.h>
#include <string.h>

int main()
{
  char palavra[20];

  sprintf(palavra, "MELANCIA");

  char chute;
  printf("Informe uma letra: ");
  scanf("%c", &chute);

  /*A função strlen se encontra demtro da biiblioteca <string.h>. A função retorna o tamanho de array do tipo CHAR passado como parametro.*/
  for (int i = 0; i < strlen(palavra); i++)
  {
    if (palavra[i] == chute)
    {
      printf("Essa letra se encontra na posição %d\n", i);
    }
  }
}
