#include <stdio.h>

#define A 6

void inverter(int f1[], int f2[], int cont);

int main() {
    int f1[A], f2[A], cont = 0;
    printf("Inverter um vetor\n\n");
    for (int i=0; i<A; i++) {
        printf("Insira valor na casa %d: ", i);
        scanf("%d", &f1[i]);
    }
    printf("A funcao invertida sera: "); 
    inverter(f1, f2, cont);
}

void inverter(int f1[], int f2[], int cont) {
    if (cont < A) {
        f2[cont] = f1[A -cont -1];
         inverter(f1, f2, cont+1);
    } else {
        for (int i=0; i<A; i++) {
        printf("%d ", f2[i]);
        }
    }

}