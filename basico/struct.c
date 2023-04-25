//Faça um programa de cadastro de aluno para professoara. Esse aluno deve ter nome, matricula, nota1, nota2, nota3, nota4, media e informar se o aluno foi aprovado ou não.

#include <stdio.h>

int main(void) {
  struct ficha_aluno {
    char nome[20];
    long int matricula;
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
    char resp[2]; 
  };

  struct ficha_aluno aluno;

  printf("Nome.....: ");
  fgets(aluno.nome, 20, stdin);

  printf("Matricula: ");
  scanf("%ld", &aluno.matricula);

  printf("Nota 1....: ");
  scanf("%f", &aluno.nota1);

  printf("Nota 2....: ");
  scanf("%f", &aluno.nota2);

  printf("Nota 3....: ");
  scanf("%f", &aluno.nota3);

  printf("Nota 4....: ");
  scanf("%f", &aluno.nota4);

  aluno.media = (aluno.nota1 + aluno.nota2 + aluno.nota3 + aluno.nota4)/4;


printf("Nome.....: %s", aluno.nome);
printf("\nMatricula: %ld", aluno.matricula);
printf("\nNota 1...: %.2f", aluno.nota1);
printf("\nNota 2...: %.2f", aluno.nota2);
printf("\nNota 3...: %.2f", aluno.nota3);
printf("\nNota 4...: %.2f", aluno.nota4);
printf("\nNota.....: %.2f", aluno.media);

  return 0;
}