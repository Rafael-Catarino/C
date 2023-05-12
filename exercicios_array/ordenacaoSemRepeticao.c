/*Faca um programa que preencha um vetor numerico de 10 posicoes com valores digitados pelo o usuario, porem que nao deixe entrar numeros repitidos e que ao final mostre os numeros ordenados de forma crescente.*/

#include <stdio.h>
#include <stdlib.h>

int arrNum[10];

void cabecalho()
{
  printf("------------------------------\n");
  printf("       Lista de numeros       \n");
  printf("------------------------------\n");
}

void pegaNumero()
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
        printf("Numero repetido. Favor informar outro numero");
        i--;
        break;
      }
    }
  }
}

void ordenaNumero()
{
  int aux;
  for (int i = 1; i <= 10; i++)
  {
    for (int j = 1; j <= 10; j++)
    {
      if (arrNum[i] < arrNum[j])
      {
        aux = arrNum[i];
        arrNum[i] = arrNum[j];
        arrNum[j] = aux;
      }
    }
  }
}

void mostraNumero()
{
  for (int i = 1; i <= 10; i++)
  {
    printf("%d - ", arrNum[i]);
  }
}

int main(void)
{
  system("clear");
  cabecalho();
  pegaNumero();
  ordenaNumero();
  system("clear");
  cabecalho();
  mostraNumero();
  return 0;
}
