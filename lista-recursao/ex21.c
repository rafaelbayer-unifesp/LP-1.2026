#include <stdio.h>

int funcao(int n);

int main() {
    int n;
    printf("Termo de funcao\n\n");
    printf("Insira seu numero: ");
    scanf("%d", &n);
    printf("O resultado da funcao eh: %d", funcao(n));
}

int funcao(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    return 2*funcao(n-1) + 3*funcao(n-2);
}