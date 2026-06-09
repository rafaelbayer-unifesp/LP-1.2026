#include <stdio.h>

void imprimeSerie(int i, int j, int k);

int main() {
    int i, j, k;
    printf("Exibindo os valores entre I e J mais constante K\n\n");
    printf("Insira I: ");
    scanf("%d", &i);
    printf("Insira J: ");
    scanf("%d", &j);
    printf("Insira K: ");
    scanf("%d", &k);
    printf("Como ficara: ");
    imprimeSerie(i, j, k);
}

void imprimeSerie(int i, int j, int k) {
    if (i <= j) {
        printf("%d ", i + k);
        imprimeSerie(i+1, j, k);
    }
}