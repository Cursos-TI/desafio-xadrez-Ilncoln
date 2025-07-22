#include <stdio.h>

int main() {

    //Variaveis

    int torre, bispo = 0, rainha = 0;

    //Movimento da torre
    printf("Torre se move para: \n");

    for ( torre = 0; torre < 5; torre++)
    {printf("- Direita ");}

    //Movimento do bispo
    printf("\nBispo se move para: \n");

    while (bispo < 5)
    {printf("- Cima, Direita ");
     bispo++;   
    }

    //Movimento da rainha
    printf("\nRainha se move para: \n");

    do
    {printf("- Esquerda ");
      rainha++;  
    } while (rainha < 8);
    
    
    return 0;

}