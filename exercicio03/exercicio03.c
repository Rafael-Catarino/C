/*Faça um Programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00.
Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações:
comprar apenas latas de 18 litros;
comprar apenas galões de 3,6 litros;
misturar latas e galões, de forma que o desperdício de tinta seja menor. Acrescente 10% de folga e sempre arredonde os valores para cima, isto é, considere latas cheias.*/

#include <stdio.h>

int main() 
{
  float area, litros;

  printf("Informe o tamanho da area que vai ser pintada (em metros quadrados): ");
  scanf("%f", &area);

  litros = area/6;

  printf("Voce vai gastar: %.2f litros.\n\n", litros);

  if(litros < 10.8) {
    if(litros < 3.6) {
      printf("Voce vai precisar comprar 1 galão de 3,6 litros. Valor: R$ 25,00\n\n");
    } else if(litros < 7.2) {
      printf("Voce vai precisar comprar 2 galões de 3,6 litros. Valor: R$ 50,00\n\n");
    } else {
      printf("Voce vai precisar comprar 3 galões de 3,6 litros. Valor: R$ 75,00\n\n");
    }
  } else if(litros < 18) {
    printf("Voce vai precisar comprar 1 galão de 18 litros. Valor: R$ 80,00\n\n");
  } else if(litros >= 18) {
    if(litros < 21.6) {
      printf("Voce vai precisar comprar 1 galão de 18 litros e 1 de 3.6 litros. Valor: R$ 105,00\n\n");
    } else if(litros < 25.2) {
      printf("Voce vai precisar comprar 1 galão de 18 litros e 2 de 3.6 litros. Valor: R$ 130,00\n\n");
    } else if(litros < 28.8) {
      printf("Voce vai precisar comprar 1 galão de 18 litros e 1 de 3.6 litros. Valor: R$ 150,00\n\n");
    } else {
      printf("Voce vai precisar comprar 2 galoes de 18 litros Valor: R$ 160,00\n\n");
    }
  };

  return 0;
}