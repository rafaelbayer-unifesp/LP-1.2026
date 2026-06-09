#include <stdio.h>

int soma(int vetor[], int cont);

int main() {
    int vetor[6], cont = 0;
    printf("soma elementos de funcao\n\n");
    for (int i=0; i<6; i++) {
        printf("Insira valor na casa %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Soma dos valores inseridos: %d", soma(vetor, cont));
}

int soma(int vetor[], int cont) {
    if (cont < 6) {
        return vetor[cont] + soma(vetor, cont+1);
    }
    return 0;
}
