/*Faca um programa que preencha um vetor numerico de 10 posicoes com valores digitados pelo o usuario, porem que nao deixe entrar numeros repitidos.*/

#include <stdio.h>

int main(void)
{
	int num[10], compara = 0, aux = 0;

	for (int i = 1; i <= 10; i++)
	{
		printf("\nInforme o %d numero: ", i);
		scanf("%d", &compara);
		for (int in = 0; in < i; in++)
		{
			if (in == 0)
			{
				num[i] = compara;
			}
			else if (num[in] != compara)
			{
				num[i] = compara;
			}
			else
			{
				printf("Numero repitido, favor informar outro numero.\n");
				i--;
				break;
			}
		}
	}

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (num[i] < num[j])
			{
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
	}

	for (int index = 1; index <= 10; index++)
	{
		printf("%d ", num[index]);
	}

	return 0;
}
