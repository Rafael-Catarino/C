/*Faca um programa que preencha um vetor numerico de 10 posicoes com valores digitados pelo o usuario*/

#include <stdio.h>

int main(void)
{
  int num[10];

  printf("------------------------------\n");
  printf("       Lista de numeros       \n");
  printf("------------------------------");

  for (int i = 0; i < 10; i++)
  {
    printf("\nDigite o %d numero: ", i + 1);
    scanf("%d", &num[i]);
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%d", num[i]);
  }

  return 0;
}
