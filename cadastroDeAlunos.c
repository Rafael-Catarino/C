#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
  char nome[20];
  long int mat;
  float nota1;
  float nota2;
  float nota3;
  float nota4;
};

struct Aluno arrAluno[2];

int len = sizeof(arrAluno)/sizeof(arrAluno[0]);

//--------- page Header --------------
void header()
{
  printf("========================\n");
  printf("   Cadastro de Alunos   \n");
  printf("========================\n");
}

void headerInsertStudent()
{
  printf("========================\n");
  printf("     Inserir Alunos     \n");
  printf("========================\n");
}

void headerSelectStudent()
{
  printf("========================\n");
  printf("     Mostrar Alunos     \n");
  printf("========================\n");
}
//------------------------------------

//---------- Insert Student ----------
void insertStudent(int i)
{
  printf("Nome......: ");
  scanf("%s", arrAluno[i].nome);

  printf("Matricula.: ");
  scanf("%ld", &arrAluno[i].mat);

  printf("Nota 1....: ");
  scanf("%f", &arrAluno[i].nota1);

  printf("Nota 2....: ");
  scanf("%f", &arrAluno[i].nota2);

  printf("Nota 3....: ");
  scanf("%f", &arrAluno[i].nota3);

  printf("Nota 4....: ");
  scanf("%f", &arrAluno[i].nota4);
}
//-------------------------------------

//----------- Select Student ----------
float calculateAverage(int i)
{
  return ((arrAluno[i].nota1 + arrAluno[i].nota2 + arrAluno[i].nota3 + arrAluno[i].nota4) / 4);
}

void studentSituation(float average)
{
  if (average > 7)
  {
    printf("Situação..: Aprovado");
  }
  else if (average > 4)
  {
    printf("Situação..: Recuperação");
  }
  else
  {
    printf("Situação..: Reprovado");
  }
}

void selectStudent(int i)
{
  float average = 0;
  printf("Nome......: %s\n", arrAluno[i].nome);
  printf("Matricula.: %ld\n", arrAluno[i].mat);
  printf("1º nota...: %.2f\n", arrAluno[i].nota1);
  printf("2º nota...: %.2f\n", arrAluno[i].nota2);
  printf("3º nota...: %.2f\n", arrAluno[i].nota3);
  printf("4º nota...: %.2f\n", arrAluno[i].nota4);
  average = calculateAverage(i);
  printf("Media.....: %.2f\n", average);
  studentSituation(average);
}
//---------------------------------------

//----------- Change Student ------------
void changeStudent()
{
  long int index;
  printf("\nInforme a matricula digitada do aluno cadastrado: ");
  scanf("%ld", &index);
  for(int i = 0; i < len; i++){
    if(arrAluno[i].mat == index){
      insertStudent(i);
      break;
    }
  }
  printf("\nO aluno foi alterado com sucesso.");
}

void choiceOfCase(int option)
{
  switch (option)
  {
  case 1:
    system("clear");
    headerInsertStudent();
    for (int i = 0; i < len; i++)
    {
      insertStudent(i);
      printf("\n------------------------\n");
    }
    break;

  case 2:
    system("clear");
    for (int i = 0; i < len; i++)
    {
      selectStudent(i);
      printf("\n------------------------\n");
    }
    changeStudent();
    break;

  case 3:
    system("clear");
    headerSelectStudent();
    for (int i = 0; i < len; i++)
    {
      selectStudent(i);
      printf("\n------------------------\n");
    }
  }
}

int main()
{
  int option = 0, flag = 1;
  system("clear");
  header();
  do
  {
    printf("O que deseja fazer: \n[1] Incluir \n[2] Alterar \n[3] Mostar\nR: ");
    scanf("%d", &option);

    choiceOfCase(option);

    printf("Deseja continuar no programa? [1] Sim e [0] Não: ");
    scanf("%d", &flag);

    system("clear");
  } while (flag);
  return 0;
}