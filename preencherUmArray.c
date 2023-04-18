/*Faca um programa que preencha um array numerico de 10 posições com valores digitados pelo o usuario.
Dividi o codigo em funções para ficar melhor legivel e facilitar manuteções futuras.*/

#include <stdio.h>
#include <stdlib.h>

int num[10];

int cabecalho(void)
{
  printf("------------------------------\n");
  printf("       Lista de numeros       \n");
  printf("------------------------------\n");
  return 0;
}

int pegaNumero(void)
{
  for (int i = 0; i < 10; i++)
  {
    printf("Informe o %d numero: ", i + 1);
    scanf("%d", &num[i]);
  }
  return 0;
}

int mostrarNumeros(void)
{
  for (int i = 0; i < 10; i++)
  {
    printf("Numero %d foi: %d \n", i + 1, num[i]);
  }
  return 0;
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
