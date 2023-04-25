//Faça um programa que guarde 2 números e mostre o resultado da sua multiplicação. 
#include <stdio.h>

int main(void)
{
  int x = 0, y = 0, resultado = 0;

  printf("Digite um numero: ");
  scanf("%d", &x);
  printf("Digite o segundo numero: ");
  scanf("%d", &y);
  resultado = x * y;
  printf("A multiplicacao de %d por %d eh igual a %d\n", x, y, resultado);

  return 0;
}
