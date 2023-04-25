//Faça um programa que devolva uma tabuada.
#include <stdio.h>

int main()
{
  int num = 0, tabuada = 0;

  printf("Informe um numero para gerar a tabuada dele: ");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++)
  {
    tabuada = num * i;
    printf("%d X %d = %d \n", num, i, tabuada);
  }
  return 0;
}