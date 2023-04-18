/*Faca um programa que preencha um vetor numerico de 10 posicoes com valores digitados pelo o usuario, porem que nao deixe entrar numeros repitidos.*/

#include <stdio.h>
#include <stdlib.h>

int arrNum[10];

int cabecalho(void)
{
  printf("--------------------------------\n");
  printf(" Lista de numeros sem repeticao \n");
  printf("--------------------------------\n");
  return 0;
}

int validaNumero(void)
{
  int numero;

  for (int i = 1; i <= 10; i++)
  {
    printf("Informe o %d numero: ", i);
    scanf("%d", &numero);
    for (int j = 0; j < i; j++)
    {
      if (j == 0)
      {
        arrNum[i] = numero;
      }
      else if (arrNum[j] != numero)
      {
        arrNum[i] = numero;
      }
      else
      {
        printf("Numero repitido. Favor digitar outro numero.");
        i--;
        break;
      }
    }
  }
  return 0;
}

int imprimeNaTela(void)
{
  for (int i = 1; i <= 10; i++)
  {
    printf("Numero %d foi: %d \n", i, arrNum[i]);
  }
  return 0;
}

int main(void)
{
  system("clear");
  cabecalho();
  validaNumero();
  system("clear");
  cabecalho();
  imprimeNaTela();
}