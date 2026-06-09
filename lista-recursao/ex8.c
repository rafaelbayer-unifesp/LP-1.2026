#include <stdio.h>

void crescente(int n, int cont);

int main() {
    int n, cont;
    printf("Ordem decrescente N a 0\n\n");
    printf("Insira N: ");
    scanf("%d", &n);
    cont = n;
    printf("Ordem: ");
    crescente(n, cont);
}

void crescente(int n, int cont) {
    if (cont >= 0) {
        printf("%d ", n-(n-cont));
        cont--;
        crescente(n, cont);
    }
}