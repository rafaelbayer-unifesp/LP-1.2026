#include <stdio.h>

int tetranacci(int n);

int main() {
    int n;
    printf("Tretanacci\n\n");
    printf("Insira seu numero: ");
    scanf("%d", &n);
    printf("O numero na posicao %d eh: %d", n, tetranacci(n));
}

int tetranacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 0;
    }
    if (n == 3) {
        return 1;
    }
    return tetranacci(n-1) + tetranacci(n-2) + tetranacci(n-3) + tetranacci(n-4);
}