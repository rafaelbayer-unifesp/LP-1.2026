#include <stdio.h>
#include <string.h>


char binario[9] = "";
int num;

char *ehBinario(int num) {
    char inverter[9] = "";
    while (num > 0) {
        if (num % 2 == 0) {
            strcat(inverter, "0");
        } else {
            strcat(inverter, "1");
        }
        num /= 2; 
    }
    for (int i = strlen(inverter)-1; i>=0; i--) {
            strncat(binario, &inverter[i], 1);
        }
    return binario;
}

int main() {

    printf("Transformar numero em binario\n\n");

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    printf("Numero em binario: %s", ehBinario(num));
}