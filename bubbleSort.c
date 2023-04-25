#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num[10] = {98, 65, 25, 100, 73, 1, 30, 48, 25, 98};
  int aux;

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (num[i] < num[j])
      {
        aux = num[i];
        num[i] = num[j];
        num[j] = aux;
      }
    }
  }

  for (int i = 0; i <10; i++){
    printf("%d\n", num[i]);
  }
  return 0;
}
