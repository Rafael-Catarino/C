#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeroSecreto = 0, tentativas = 1, chute = 0, acertou = 0, maior = 0;
    int segundo = 0, nivel = 0;
    double pontos = 1000.0;

    segundo = time(0);
    srand(segundo);
    numeroSecreto = rand() % 100;

    printf("-----------------------------------------------\n");
    printf("---------- JOGO DE ADIVINHAR O NUMERO ---------\n");
    printf("-----------------------------------------------\n");

    printf("Você deseja jogar em qual nivel: [1] Dificil - [2] Medio - [3] Facil\n");
    scanf("%d", &nivel);

    switch (nivel)
    {
    case 1:
        tentativas = 5;
        break;

    case 2:
        tentativas = 10;
        break;

    case 3:
        tentativas = 15;
        break;
    }

    for (int i = 1; i <= tentativas; i++)
    {
        printf("Tentativa %d\n", tentativas--);
        printf("Qual e o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0)
        {
            printf("Voc� nao pode chutar numeros negativos!\n");
            continue;
        }

        acertou = (chute == numeroSecreto);
        maior = chute > numeroSecreto;

        if (acertou)
        {
            printf("Parabens! Voce acertou!\n");
            printf("Jogue de novo, voce e um bom jogador!\n");

            break;
        }

        else if (maior)
        {
            printf("Seu chute foi maior que o numero secreto\n");
        }

        else
        {
            printf("Seu chute foi menor que o numero secreto\n");
        }

        pontos = pontos - (abs(numeroSecreto - chute) / 2.0);
    }

    printf("Voce fez: %2.0f pontos.\n", pontos);
    printf("Fim de jogo!\n");
    printf("Voce acertou em %d tentativas!\n", tentativas);
    return 0;
}
