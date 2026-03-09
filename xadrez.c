#include <stdio.h>



int main() {
    //declarando valores das casas e os contadores de cada peça
    int casastorre = 5,contadortorre = 0;
    int casasbispo = 5,contadorbispo = 0;
    int casasrainha = 8,contadorrainha = 0;
    //movimento da torre
    printf("----------------------\n");
    printf("  MOVIMENTO DA TORRE \n");
    printf("----------------------\n");

    while (contadortorre < casastorre)
    {
        printf("Direita\n");
        contadortorre++;
    }
    //movimento do bispo
    printf("\n");//quebra de linha

    printf("----------------------\n");
    printf("  MOVIMENTO DO BISPO \n");
    printf("----------------------\n");

    do{
        printf("Cima, direita\n");
        contadorbispo++;
    }while(contadorbispo < casasbispo);
    //movimento da rainha
    printf("\n");
    printf("----------------------\n");
    printf(" MOVIMENTO DA RAINHA  \n");
    printf("----------------------\n");

    for (contadorrainha = 0; contadorrainha < casasrainha; contadorrainha++){
        printf("Esquerda\n");
    }
    //movimento do cavalo
    printf("\n");

    int j = 0;//variável de contagem

    printf("----------------------\n");
    printf(" MOVIMENTO DO CAVALO  \n");
    printf("----------------------\n");
    for(int i = 0; i < 1; i++){
        while (j < 2)
        {
            printf("Cima\n");
            j++;
        }
        printf("Direita\n");
    }
    return 0;
}
