#include <stdio.h>

int multiplicacao(int k, int n);

int main() {
    int k, n;
    printf("Multiplicando usando somas consecutivas\n\n");
    printf("Insira K: ");
    scanf("%d", &k);
    printf("Insira N: ");
    scanf("%d", &n);
    printf("Multiplicando %d por %d eh: %d", k, n, multiplicacao(k, n));
}

int multiplicacao(int k, int n) {
    if (n == 1) {
        return k;
    }
    return k + multiplicacao(k, n-1);
}
   