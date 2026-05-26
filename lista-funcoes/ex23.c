#include <stdio.h>

int ehMaior(int x, int y) {
    while (y <= x) {
        printf("O segundo valor precisa ser maior que o primeiro.");
        printf("\nEscolha novamente: ");
        scanf("%d", &y);
    }
    return y;
}

int calc(int x, int y) {
    int qtd = 0;
    for (int i=x; i<=y; i++) {
        if (i % 13 == 5) {
            qtd++;
        }
    }
    return qtd;
}

int main () {
    int x, y;
    printf("Numeros no intervalo que dividido por 13 possuem resto 5\n\n");
    printf("Escolha numero 1: ");
    scanf("%d", &x);
    printf("Escolha numero 2: ");
    scanf("%d", &y);
    y = ehMaior(x, y);
    printf("A quantidade de valores encontrados foi: %d", calc(x, y));
}