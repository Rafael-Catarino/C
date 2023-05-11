/* Faça um programa que alimente 3 vetores com no maximo 50 posicoes com os seguintes dados dos alunos: Matricula, nota1, nota2, nota3, nota4. Ao final o programa deve mostrar a Matricula, nota1, nota2, nota3, nota4 e media.*/

#include <stdio.h>
#include <stdlib.h>

int mat[10], i = 0;
float nota1[10], nota2[10], nota3[10], nota4[10], media[10];

void cabecalho()
{
  printf("------------------------------\n");
  printf("      Cadastro de Aluno       \n");
  printf("------------------------------\n");
}

float calculaMedia()
{
  float med;
  med = (nota1[i] + nota2[i] + nota3[i] + nota4[i]) / 4;
  return med;
}

void pegaAluno()
{
  printf("Matricula: ");
  scanf("%d", &mat[i]);
  while (mat[i] != 0)
  {
    printf("nota 1: ");
    scanf("%f", &nota1[i]);
    printf("nota 2: ");
    scanf("%f", &nota2[i]);
    printf("nota 3: ");
    scanf("%f", &nota3[i]);
    printf("nota 4: ");
    scanf("%f", &nota4[i]);
    media[i] = calculaMedia();
    i++;

    printf("Matricula: ");
    scanf("%d", &mat[i]);
  }
}

void mostraAluno()
{
  for (int j = 0; j < i; j++)
  {
    printf("%.2d - %.2f - %.2f - %.2f - %.2f - %.2f\n", mat[j], nota1[j], nota2[j], nota3[j], nota4[j], media[j]);
  }
}

int main(void)
{
  system("clear");
  cabecalho();
  pegaAluno();
  system("clear");
  cabecalho();
  mostraAluno();
}
