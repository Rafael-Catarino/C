#include <stdio.h>

int main(){
	int numeroSecreto = 42, tentativas = 1, chute = 0, acertou = 0, maior =0;


	printf("***********************************************\n");
	printf("********** JOGO DE ADIVINHAR O NUMERO *********\n");
	printf("***********************************************\n");

	while(1) {
		printf("Tentativa %d\n", tentativas);
        printf("Qual e o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você nao pode chutar numeros negativos!\n");
            continue;
        }

        acertou = (chute == numeroSecreto);
        maior = chute > numeroSecreto;

        if(acertou) {
            printf("Parabens! Voce acertou!\n");
            printf("Jogue de novo, voce e um bom jogador!\n");

            break;
        }

        else if(maior) {
            printf("Seu chute foi maior que o numero secreto\n");
        } 

        else {
            printf("Seu chute foi menor que o numero secreto\n");
        }

        tentativas++;
    }

    printf("Fim de jogo!\n");
    printf("Voce acertou em %d tentativas!", tentativas);
}
		
	



