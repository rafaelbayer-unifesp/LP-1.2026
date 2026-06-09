#include <stdio.h>

void exibir(int array[], int cont);

int main() {
    int array[6], cont = 0;
    printf("Exibir elementos de array\n\n");
    for (int i=0; i<6; i++) {
        printf("Insira valor na casa %d: ", i);
        scanf("%d", &array[i]);
    }
    printf("Valores inseridos: ");
    exibir(array, cont);
}

void exibir(int array[], int cont) {
    if (cont < 6) {
        printf("%d ", array[cont]);
        cont++;
        exibir(array, cont);
    }
}
