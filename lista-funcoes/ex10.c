#include <stdio.h>

int x, y;

int ehMaior(int x, int y) {
    scanf("%d", &y);
    while (y <= x) {
        printf("Numero 2 precisa ser maior que o 1 para funcionar.");
        printf("\nEscolha novamente: ");
        scanf("%d", &y);
    }
    return y;
}

int primosEntre (int x, int y) {
    int cont, resp = 0;
    for (int i=x; i<=y; i++) {
        cont = 0;
        for (int j=1; j<=i; j++) {
            if (i % j == 0) {
                cont++;
            }
        }
        if (cont == 2) {
            resp++;
        }
    }
    return resp;
}

int main() {
    printf("Encontrar primos entre 2 numeros\n\n");
    printf("Escolha numero 1: ");
    scanf("%d", &x);
    printf("Escolha numero 2: ");
    y = ehMaior(x, y);
    printf("A quantidade de primos entre %d e %d (incluindo eles mesmos) eh: %d", x, y, primosEntre(x, y));
}