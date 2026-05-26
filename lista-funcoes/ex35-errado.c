#include <stdio.h>
#include <string.h>

char str[10], str2[10], copy[10], str3[10], junto[20], find[10], cat[10] = "";
int num;

int ehStrlen(char str[]) {
    int cont = 0;
    for (int i=0; str[i] != '\0'; i++) {
        cont++;
    }
    return cont;
}

int ehStrcmp(char str[], char str2[]) {
    for (int i=0; i<ehStrlen(str) && i<ehStrlen(str2); i++) {
        if (str[i] != str2[i]) {
            return 0; // diferente
        }
    }
    return 1; // igual
}

char *ehStrncpy(char str[], char copy[], int num) {
    for (int i=0; i<num; i++) {
        copy[i] = str[i];
    }
    copy[num] = '\0';
    return copy;
}

char *ehStrcat(char str[], char str3[], char junto[]) {
    int cont = 0;
    for (int i=0; i<ehStrlen(str); i++) {
        junto[cont] = str[i];
        cont++;
    }
    for (int i=0; i<ehStrlen(str3); i++) {
        junto[cont] = str3[i];
        cont++;
    }
    junto[cont] = '\0';
    return junto;
}

char *ehStrfind(char str[], char find[]) {

    for (int i=0; i<ehStrlen(str); i++) {
        int cont = 0;
        if (str[i] == find[0]) {
            for (int j=0; j<ehStrlen(find); j++) {
                if (find[j] == str[i + j]) {
                    cont = 1;
                } else {
                    break;
                }
            }
            if (cont == 1) {
                char posicao[4];
                sprintf(posicao, "%d ", i);
                ehStrcat(cat, posicao, cat);
            }
        }
    }
    if (cat != "") {
        return cat;
    } else {
        return "vazio";
    }
}

int main() {
    printf("\nFuncoes de string sem usa-las\n\n");
    
    printf("Insira sua string: ");
    fgets(str, sizeof(str), stdin);
    str[ehStrlen(str) - 1] = '\0';
    printf("\nTamanho da string: %d", ehStrlen(str));

    printf("\nDigite uma outra string a comparar: ");
    fgets(str2, sizeof(str2), stdin);
    str2[ehStrlen(str2) - 1] = '\0';
    if(ehStrcmp(str, str2) == 0) {
        printf("\nSrings diferentes");
    } else {
        printf("\nStrings iguais");
    }

    printf("\nEscolha quantos caracteres copiar para uma outra string: ");
    scanf("%d", &num);
    printf("Copia da primeira com %d caracteres: ", num);
    ehStrncpy(str, copy, num);
    printf("%s", copy);

    printf("\nAdicione um texto que se somara a primeira string: ");
    fgets(str3, sizeof(str3), stdin);
    str3[ehStrlen(str3) - 1] = '\0';
    printf("\nConcatenando 2 strings: ");
    ehStrcat(str, str3, junto);
    printf("%s", junto);

    printf("\nAdicione um texto para encontrar dentro da primeira string: ");
    fgets(find, sizeof(find), stdin);
    find[ehStrlen(find) - 1] = '\0';
    printf("\nPosicoes encontradas: ");
    ehStrfind(str, find);
    printf("%s", find);
}

// Esse sem ajuda não daria