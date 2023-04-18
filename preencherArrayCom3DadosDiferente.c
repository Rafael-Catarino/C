#include <stdio.h>
#include <stdlib.h>

float arrAluno[150];
int i = 0;

int cabecalho(void)
{
  printf("------------------------------\n");
  printf("      Cadastro de Alunos      \n");
  printf("------------------------------\n");
  return 0;
}

int cadastraAluno(void)
{
  printf("Matricula: ");
  scanf("%f", &arrAluno[i]);

  while (arrAluno[i] != 0)
  {
    printf("nota1: ");
    scanf("%f", &arrAluno[i + 1]);
    printf("nota2: ");
    scanf("%f", &arrAluno[i + 2]);
    printf("nota3: ");
    scanf("%f", &arrAluno[i + 3]);
    printf("nota4: ");
    scanf("%f", &arrAluno[i + 4]);
    arrAluno[i + 5] = (arrAluno[i + 1] + arrAluno[i + 2] + arrAluno[i + 3] + arrAluno[i + 4]) / 4;
    i = i + 6;

    printf("Matricula: ");
    scanf("%f", &arrAluno[i]);
  }
  return 0;
}

int mostraAluno(void)
{
  for (int j = 0; j < i; j++)
  {
    printf("Matricula: %.0f - nota1: %.2f - nota2: %.2f - nota3: %.2f - nota4: %.2f - media: %.2f", arrAluno[j], arrAluno[j + 1], arrAluno[j + 2], arrAluno[j + 3], arrAluno[j + 4], arrAluno[j + 5]);
    j = j + 6;
  }
  return 0;
}

int main(void)
{
  system("clear");
  cabecalho();
  cadastraAluno();
  mostraAluno();
  return 0;
}