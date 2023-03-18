/*Façaum programa que preencha um vetor numérico de 10 posições com valores digitados pelo o ususário*/

#include <stdio.h>

int main(void){
  int num[10];

  for(int i = 1; i <= 10; i++){
    printf("Digite o %d numero: ",i);
    scanf("%d", &num[i]);
    printf("%d", num[i]);
  }
  printf("foi");
  for(int i = 0; i < 10; i++){
    printf("foi");
    printf("%d", num[i]);
  }
  return 0;
}