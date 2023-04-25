/*Faca um programa que preencha um array numerico de 10 posições com valores digitados pelo o usuario.
Dividi o codigo em funções para ficar melhor legivel e facilitar manuteções futuras.*/

#include <stdio.h>
#include <stdlib.h>

int num[10];

void cabecalho()
{
  printf("------------------------------\n");
  printf("       Lista de numeros       \n");
  printf("------------------------------\n");
}

void pegaNumero()
{
  for (int i = 0; i < 10; i++)
  {
    printf("Informe o %d numero: ", i + 1);
    scanf("%d", &num[i]);
  }
}

void mostrarNumeros()
{
  for (int i = 0; i < 10; i++)
  {
    printf("Numero %d foi: %d \n", i + 1, num[i]);
  }
}

int main(void)
{
  system("clear");
  cabecalho();
  pegaNumero();
  system("clear");
  cabecalho();
  mostrarNumeros();
  return 0;
}
