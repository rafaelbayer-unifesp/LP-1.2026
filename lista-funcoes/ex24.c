#include <stdio.h>

int ehMaior(int x, int y) {
    while (y > x) {
        printf("O segundo valor precisa ser menor que o primeiro na combinacao.");
        printf("\nEscolha novamente: ");
        scanf("%d", &y);
    }
    return y;
}

int fatorial(int x) {
    int fat=1;
    for (int i = x; i>0; i--) {
        fat = fat * i;
    }
    return fat;
}

int combinacao(int n, int r) {
    return fatorial(n) / ( fatorial(r) * fatorial(n - r) );
}

int main() {
    int n, r;
    printf("Combinacao\n\n");
    printf("Insira o valor de N: ");
    scanf("%d", &n);
    printf("Insira o valor de R: ");
    scanf("%d", &r);
    r = ehMaior(n, r);
    printf("A combinacao de %d e %d e: %d", n, r, combinacao(n, r));
}