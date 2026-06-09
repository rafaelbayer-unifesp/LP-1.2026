#include <stdio.h>

float serie(float n, float cont);

int main() {
    float n, cont = 1;
    printf("Valor da serie S = (1 + n*n) / n\n\n");
    printf("Insira N: ");
    scanf("%f", &n);
    printf("A serie S vale: %f", serie(n, cont));
}

float serie(float n, float cont) {
    if (cont < n) {
        return ((1 + (cont*cont)) / cont) + serie(n, cont+1);
    }
    return (1 + (cont*cont)) / cont;
}