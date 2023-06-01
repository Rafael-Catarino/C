#include<stdio.h>

int main()
{	
	FILE*file;
	file = fopen("C:\\vscode\\C\\manipulaçãoDeArquivos\\file.txt","w"); /*cria um arquivo .txt no diretorio que foi passado o caminho.*/
	/*file = fopen("file.txt","w"); cria um arquivo txt na mesma pasta do programa.*/	
	fprintf(file,"Meu nome é Rafael.");
	fclose(file);
	return 0;
}
