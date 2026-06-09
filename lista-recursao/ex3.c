#include <stdio.h>

int somaCubos(int n);

int main() {
    int n;
    printf("Soma dos cubos de 1 a N\n\n");
    printf("Insira seu numero: ");
    scanf("%d", &n);
    printf("A soma dos cubos e: %d", somaCubos(n));
}

int somaCubos(int n) {
    if (n == 1) {
        return 1;
    }
    return n*n*n + somaCubos(n-1);
}