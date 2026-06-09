#include <stdio.h>

void exibir(int array[], int cont);

int main() {
    int array[6], cont = 0;
    printf("Menor elemento do vetor\n\n");
    for (int i=0; i<6; i++) {
        printf("Insira valor na casa %d: ", i);
        scanf("%d", &array[i]);
    }
    printf("Menor valor: ");
    exibir(array, cont);
}

void exibir(int array[], int cont) {
    if (cont < 6) {
        if (array[cont] < array[0]) {
            array[0] = array[cont];
        }
        cont++;
        exibir(array, cont);
    } else {
        printf("%d", array[0]);
    }
    
}
