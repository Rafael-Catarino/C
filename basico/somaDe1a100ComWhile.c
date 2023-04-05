#include <stdio.h>

//Escreva um programa que imprima a soma de todos os números de 1 até 100. Ou seja, ele calculará o resultado de 1+2+3+4+...+100.

int main() {
	int num = 1, soma = 0;
	while (num <= 100) {
		soma = soma + num;
		printf("%d - ", soma);
		num++;
	}
	
	return 0;
}
