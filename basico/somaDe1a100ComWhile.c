#include <stdio.h>

//Escreva um programa que imprima a soma de todos os n�meros de 1 at� 100. Ou seja, ele calcular� o resultado de 1+2+3+4+...+100.

int main() {
	int num = 1, soma = 0;
	while (num <= 100) {
		soma = soma + num;
		printf("%d - ", soma);
		num++;
	}
	
	return 0;
}
