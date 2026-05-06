#include <stdio.h>

int main(){

    printf("Soma progressiva dos elementos da matriz\n\n");

    int scan[3][4], soma[3], valor = 0, linha = 0;

    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            printf("Valor na linha %d coluna %d: ", i+1, j+1);
            scanf("%d", &scan[i][j]);
            valor = valor + scan[i][j];
            linha = linha + scan[i][j];
        }
        soma[i] = linha;
        linha = 0; 
    }

    printf("\nValores inseridos:\n");
    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            printf("   %d", scan[i][j]);
        }
        printf("\n");
    }

    printf("\n\nValores somados :\n");
    for (int i=0; i<3; i++){
        printf("Linha %d:   %d\n",i+1, soma[i]);
    }

    printf("\nValor total da soma: %d", valor);

}
