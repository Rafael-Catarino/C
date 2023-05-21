#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrNum[6];

void cabecalho()
{
    printf("------------------------------\n");
    printf("Sorteando Numeros da Mega Sena\n");
    printf("------------------------------\n");
}

void sorteandoNumeros()
{
    int sorteio;
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
        sorteio = rand() % 100;
        while (sorteio >= 60 || sorteio == 0)
        {
            sorteio = rand() % 100;
        }
        arrNum[i] = sorteio;
    }
}

void ordenaNumero()
{
    int aux;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arrNum[i] < arrNum[j])
            {
                aux = arrNum[i];
                arrNum[i] = arrNum[j];
                arrNum[j] = aux;
            }
        }
    }
}

void mostraNumeros()
{
    for (int j = 0; j < 6; j++)
    {
        printf("%d - ", arrNum[j]);
    }
}

int main(void)
{
    system("clear");
    cabecalho();
    sorteandoNumeros();
    ordenaNumero();
    mostraNumeros();
    return 0;
}