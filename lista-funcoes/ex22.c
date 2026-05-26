#include <stdio.h>

int calc(int N) {
    for (int i=1; i <= N; i++) {
        if (i*i > N) {
            return i;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Procurar menor inteiro cujo quadrado eh maior que N\n\n");
    printf("Insira inteiro positivo: ");
    scanf("%d", &n);
    printf("O numero desejado eh: %d", calc(n));
}