#include<stdio.h>
#include<stdlib.h>

int main(){
    int x=0, y=0, z=0;

    FILE *file;
    file = fopen("numero.txt", "r");
    if(file == NULL){
    	
		printf("Nao existe arquivo com este nome.\n"
		"Favor cria um arquivo txt com este nome de arquivo.\n\n");
    	system("pause");
    	return 0;
    	
	}
	
    fscanf(file,"%i %i %i", &x, &y, &z);

    printf("%i %i %i\n\n", x, y, z);

    fclose(file);
	
	system("pause");
    return 0;
}
