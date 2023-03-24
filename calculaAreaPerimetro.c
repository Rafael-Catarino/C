/*Dado o tamanho da base e da altura de um retangulo, calcular a sua area e o seu perimetro*/

#include <stdio.h>

int main(void)
{
  
  int altura, base, area, perimetro;

  printf("-----------------------------------------\n");
  printf("  CALCULAR AREA E PERIMETRO DO RETANGULO\n");
  printf("-----------------------------------------\n\n");

  printf("Informe o valor da base do retangulo: ");
  scanf("%i", &base);
  
  printf("Informe o valor da altura retangulo: ");
  scanf("%i", &altura);

  area = base * altura;
  perimetro = 2*(base + altura);

  printf("Um trinagulo com base de: %i e altura de: %i tem perimetro de: %i e area de %i \n\n", base, altura, perimetro, area);
  
  return 0;
}
