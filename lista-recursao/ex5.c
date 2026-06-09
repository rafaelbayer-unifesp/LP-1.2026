#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;
    printf("Termo de fibonacci\n\n");
    printf("Insira seu numero: ");
    scanf("%d", &n);
    printf("O numero na posicao %d eh: %d", n, fibonacci(n));
}

int fibonacci(int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}