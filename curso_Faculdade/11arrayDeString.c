#include <stdio.h>

int main() {
  /*Na linguagem C não temos o tipo string como tipos primitivos. Por isso precisamos usar um array de char para guardar um palavra ou uma fraze.*/
    char palavra[20];

  /*sprintf guarda dentro do array a palavra que você passa como parametro, e ao final da palavra ele coloca um /0 para informar que a palavra acabou...(array: palavra e parametro: MELANCIA).*/
    sprintf(palavra, "MELANCIA"); 
    
    /*O %s faz com que não precise fazer o for passando indece por indice para imprimir uma palavra*/
    printf("%s", palavra);
  }