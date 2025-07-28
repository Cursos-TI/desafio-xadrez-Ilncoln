#include <stdio.h>

//Movimento da torre

void movertorre(int casas) {
    if ( casas > 0){
        printf("Direita\n");
        movertorre(casas - 1);
    }

}

//Movimnento da rainha

void moverrainha(int casas) {
    if (casas > 0){
        printf("Esquerda\n");
        moverrainha(casas - 1);
    }
    
}

//Movimento do bispo


void moverbispo(int casas) {
    int movimentobispo = 1;
    if(casas > 0){
    while (movimentobispo--)
    {
        printf("Cima\n");

        for (int i = 0; i < 1; i++)
        {
            printf("Direita\n");
        }  
    }
    
    
    moverbispo(casas - 1);
    }
}

int main() {
    printf("A torre se move para:\n");
    movertorre(5);

    printf("  \n");

    printf("A rainha se move para:\n");
    moverrainha(8);

    printf("  \n");

    printf("O bispo se move para:\n");
    moverbispo(5);

    //Movimento do cavalo
    printf("  \n");
    printf("O cavalo salta para:\n");

   for (int movimentocavalo = 1; movimentocavalo <= 3; movimentocavalo++)
    {
        if(movimentocavalo == 1 || movimentocavalo == 2){
            printf("Cima\n");
        }    
        else if(movimentocavalo == 3){
            printf("Direita\n");
        
        }
    }
   


    return 0;

}