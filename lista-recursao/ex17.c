#include <stdio.h>

int fatorial(int n);

int main() {
    int n, resultado;
    printf("Fatorial quadruplo de N\n\n");
    printf("Insira seu numero: ");
    scanf("%d", &n);
    resultado = fatorial(2*n) / fatorial(n);
    printf("A fatorial e: %d", resultado);
}

int fatorial(int n) {
    for (int i=n; i>=1; i--) {
        return i * fatorial(n-1);
    }
    return 1;
}