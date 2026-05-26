#include <stdio.h>
#include <string.h>

int num;
char romano[10];

int ehMaior(int y) {
    scanf("%d", &y);
    while (y <= 0 || y >= 100) {
        printf("Numero precisa ser maior que 0 e menor que 100 para funcionar.");
        printf("\nEscolha novamente: ");
        scanf("%d", &y);
    }
    return y;
}

char *ehRomano(int num) {
    int a1, a2;

    a1 = num % 100;
    if (a1 >= 90) {
        strcat(romano, "XC");
    } if (a1 >= 50) {
        strcat(romano, "L");
        a1 -= 50;
    } if (a1 >= 40) {
        strcat(romano, "XL");
    } if (a1 >= 10) {
        while (a1 >= 10) {
            strcat(romano, "X");
            a1 -= 10; }
    }

    a2 = num % 10;
    switch (a2) {
        case 0:
            break;
        case 1:
            strcat(romano, "I");
            break;
        case 2:
            strcat(romano, "II");
            break;
        case 3:
            strcat(romano, "III");
            break;
        case 4:
            strcat(romano, "IV");
            break;
        case 5:
            strcat(romano, "V");
            break;
        case 6:
            strcat(romano, "VI");
            break;
        case 7:
            strcat(romano, "VII");
            break;
        case 8:
            strcat(romano, "VIII");
            break;
        case 9:
            strcat(romano, "IX");
            break;
    }
}

int main() {
    printf("Transformador de numero para romano\n\n");
    printf("Insira seu numero:");
    num = ehMaior(num);
    ehRomano(num);
    printf("O numero %d em romano e: %s", num, romano);
    
}