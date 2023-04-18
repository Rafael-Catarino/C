#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrNum[6];

int cabecalho(void)
{
    printf("------------------------------\n");
    printf("Sorteando Numeros da Mega Sena\n");
    printf("------------------------------\n");
    return 0;
}

int sorteandoNumeros(void)
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
    return 0;
}

int ordenaNumero(void)
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
    return 0;
}

int mostraNumeros(void)
{
    for (int j = 0; j < 6; j++)
    {
        printf("%d - ", arrNum[j]);
    }
    return 0;
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