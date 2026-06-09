#include <stdio.h>

void crescente(int n, int cont);

int main() {
    int n, cont = 0;
    printf("Ordem crescente 0 a N\n\n");
    printf("Insira N: ");
    scanf("%d", &n);
    printf("Ordem: ");
    crescente(n, cont);
}

void crescente(int n, int cont) {
    if (cont <= n) {
        printf("%d ", n-(n-cont));
        cont = cont + 2;
        crescente(n, cont);
    }
}