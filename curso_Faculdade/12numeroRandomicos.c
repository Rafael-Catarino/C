#include <stdio.h>
#include <time.h>


int main() {
  int num;

  int segundos = time(0);
  srand(segundos);

  num = rand();

  printf("%d", num);
}