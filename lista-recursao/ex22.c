#include <stdio.h>

int fibg(int f0, int f1, int n);

int main() {
    int f0, f1, n;
    printf("Fibonacci para qualquer ponto de inicio\n\n");
    printf("Insira ponto 1: ");
    scanf("%d", &f0);
    printf("Insira ponto 2: ");
    scanf("%d", &f1);
    printf("Insira quantas vezes a funcao deve ser aplicada: ");
    scanf("%d", &n);
    printf("Aplicando %d vezes o valor encontrado eh: %d", n, fibg(f0, f1,  n));
}

int fibg(int f0, int f1, int n) {
    if (n == 0) {
        return f0;
    }
    if (n == 1) {
        return f1;
    }
    return fibg(f0, f1, n-1) + fibg(f0, f1, n-2);
}