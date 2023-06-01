#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *file;
	file = fopen("arquivo.txt","r");
	
	if(file == NULL){
		printf("Nao tem nenhum arquivo com esse nome.\n"
		"Favor criar um arquivo.");
		getchar();
		exit(0);
	}
	
	char frase[100];
	
	while(fgets(frase, 100, file) != NULL){
		printf("%s", frase);
	}
	
	fclose(file);
	
	
	return 0;
}
