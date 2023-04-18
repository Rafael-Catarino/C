/* Fa�a um programa que alimente 3 vetores com no maximo 50 posicoes com os seguintes dados
dos alunos: Matricula, nota1 e nota2. Sabendo que na turma posso ter menos de 50 alunos.*/

#include <stdio.h>

int main()
{
	int num;

	printf("Quantos alunos voc� vai cadastrar? [maximo de 50] :");
	scanf("%d", &num);

	int matricula[num], nota1[num], nota2[num];

	for (int i = 1; i <= num; i++)
	{
		printf("Favor informe a matricula do %d aluno: ", i);
		scanf("%d", &matricula[i]);
		printf("Favor informe a 1 nota do %d aluno: ", i);
		scanf("%d", &nota1[i]);
		printf("Favor informe a 2 do %d aluno: ", i);
		scanf("%d", &nota2[i]);
	}

	for (int i = 1; i <= num; i++)
	{
		printf("Aluno : %d \n", i);
		printf("Matricula : %d, 1 Nota : %d, 2 Nota : %d \n", matricula[i], nota1[i], nota2[i]);
	}

	// Outra forma de fazer.

	/*int matricula[50], nota1[50], nota2[50], cont = 1, flag = 0;

	while(cont <= 50){
		printf("Favor informe a matricula do %d aluno: ", cont);
		scanf("%d", &matricula[cont]);
		printf("Favor informe a 1 nota do %d aluno: ", cont);
		scanf("%d", &nota1[cont]);
		printf("Favor informe a 2 do %d aluno: ", cont);
		scanf("%d", &nota2[cont]);
		printf("Deseja incluir outro aluno? Digite -1 para sair do programa.");
		scanf("%d", &flag);
		if(flag == -1){
			break;
		}
		++cont;
	}

	for(int i = 1; i <= cont; i++){
		printf("Aluno : %d \n", i);
		printf("Matricula : %d, 1 Nota : %d, 2 Nota : %d \n", matricula[i], nota1[i], nota2[i]);
	}*/
}
