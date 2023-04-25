#include <stdio.h>
#include <stdlib.h>

struct ficha_aluno
{
  char nome[20];
  long int matricula;
  float nota1, nota2, nota3, nota4, media;
};

struct ficha_aluno aluno[10];

int i = 0;

void cabecalho()
{
  printf("------------------------------\n");
  printf("      Cadastro de Alunos      \n");
  printf("------------------------------\n");
}

void cadastraAluno()
{
  for (i = 0; i < 3; i++)
  {
    cabecalho();
    printf("Nome.....: ");
    scanf("%s", aluno[i].nome);
    printf("Matricula: ");
    scanf("%ld", &aluno[i].matricula);
    printf("nota1....: ");
    scanf("%f", &aluno[i].nota1);
    printf("nota2....: ");
    scanf("%f", &aluno[i].nota2);
    printf("nota3....: ");
    scanf("%f", &aluno[i].nota3);
    printf("nota4....: ");
    scanf("%f", &aluno[i].nota4);
    aluno[i].media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3 + aluno[i].nota4) / 4;
    system("clear");
    i++;
  }
}

void mostraAluno()
{
  for (int j = 0; j < i; j++)
  {
    printf("Nome: %s\n", aluno[j].nome);
    printf("Matricula: %ld\n", aluno[j].matricula);
    printf("nota1: %.2f\n", aluno[j].nota1);
    printf("nota2: %.2f\n", aluno[j].nota2);
    printf("nota3: %.2f\n", aluno[j].nota3);
    printf("nota4: %.2f\n", aluno[j].nota4);
    printf("media: %.2f\n", aluno[j].media);
    printf("------------------------------\n");
    j++;
  }
}

int main(void)
{
  system("clear");
  cadastraAluno();
  mostraAluno();
  return 0;
}