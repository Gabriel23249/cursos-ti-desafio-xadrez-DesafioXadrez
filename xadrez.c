#include <stdio.h>
    //recursividades de movimento das peças
    void movertorre(int casas){
        if (casas > 0){
            printf("Direita\n");
            movertorre(casas - 1);
        }
    }

    void moverBispo(int casas){

    if(casas <= 0){
        return;
    }
    for(int vertical = 0; vertical < 1; vertical++){

        printf("Cima\n");

        for(int horizontal = 0; horizontal < 1; horizontal++){
            printf("Direita\n");
        }
    }
    moverBispo(casas - 1);
}

    void moverrainha(int casas){
        if (casas > 0){
            printf("Esquerda\n");
            moverrainha(casas - 1);
        }
    }
int main() {
    //declarando valores das casas e os contadores de cada peça
   
    int casasbispo = 5,contadorbispo = 0;
    int casasrainha = 8,contadorrainha = 0;
    //movimento da torre
    printf("----------------------\n");
    printf("  MOVIMENTO DA TORRE \n");
    printf("----------------------\n");

    movertorre(5);
    //movimento do bispo
    printf("\n");//quebra de linha

    printf("----------------------\n");
    printf("  MOVIMENTO DO BISPO \n");
    printf("----------------------\n");

    moverBispo(5);
    //movimento da rainha
    printf("\n");
    printf("----------------------\n");
    printf(" MOVIMENTO DA RAINHA  \n");
    printf("----------------------\n");

    moverrainha(8);
    //movimento do cavalo
    printf("\n");

    printf("----------------------\n");
    printf(" MOVIMENTO DO CAVALO  \n");
    printf("----------------------\n");
    
   for(int vertical = 0; vertical < 2; vertical++){

        if(vertical == 1){
            continue;
        }

        printf("Cima\n");

        if(vertical == 0){
            printf("Cima\n");
            break;
        }
    }

    for(int horizontal = 0; horizontal < 1; horizontal++){
        printf("Direita\n");
    }

    return 0;
}
