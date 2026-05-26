#include <stdio.h>

int x, soma = 0;

int ehMaior(int y) {
    scanf("%d", &y);
    while (y <= 0) {
        printf("Somente inteiros maiores que 0.");
        printf("\nEscolha novamente: ");
        scanf("%d", &y);
    }
    return y;
}

int somaIntermediario(int x) {
    for (int i=1; i<=x; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    printf("Somador de numeros inteiros\n\n");
    printf("Insira um numero inteiro: ");
    x = ehMaior(x);
    printf("A soma dos numeros inteiros de 1 a %d e: %d", x, somaIntermediario(x));
}