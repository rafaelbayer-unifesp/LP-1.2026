#include <stdio.h>

int somaSerie(int i, int j, int k);

int main() {
    int i, j, k;
    printf("Soma dos valores entre I e J mais constante K\n\n");
    printf("Insira I: ");
    scanf("%d", &i);
    printf("Insira J: ");
    scanf("%d", &j);
    printf("Insira K: ");
    scanf("%d", &k);
    printf("A soma final sera: %d", somaSerie(i, j, k));
}

int somaSerie(int i, int j, int k) {
    if (i < j) {
        return i + somaSerie(i+1, j, k);
    }
    return i + k;
}