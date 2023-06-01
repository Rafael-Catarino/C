#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE *file;
	file = fopen("arquivo.txt","a");
	
	if(file == NULL){
		printf("Nao existe nenhum arquivo com este nome\n\n.");
		getchar();
		exit(1);
	}
	
	fprintf(file, "Primeira linha\n\n");
	
	/* Outra forma de gravar em arquivo texto */
	char frase[] = "Segunda linha\n";
	fputs(frase, file);/* Insere um array no arquivo */
	
	char caractere = '3';
	fputc(caractere, file); /* Insere um caractere no arquivo */
	
	fclose(file);
	
	system("pause");
	return 0;
}
