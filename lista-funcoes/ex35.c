#include <stdio.h>
#include <string.h>

char str[10], str2[10], copy[10], str3[10], junto[20], find[10], cat[20] = "";
int num;

int ehStrlen(char str[]) {
    int cont = 0;
    for (int i = 0; str[i] != '\0'; i++) cont++;
    return cont;
}

int ehStrcmp(char str[], char str2[]) {
    if (ehStrlen(str) != ehStrlen(str2)) return 0; 
    for (int i = 0; i < ehStrlen(str); i++) {
        if (str[i] != str2[i]) return 0;
    }
    return 1;
}

char *ehStrncpy(char str[], char copy[], int num) {
    for (int i = 0; i < num; i++) copy[i] = str[i];
    copy[num] = '\0'; 
    return copy;
}

char *ehStrcat(char str[], char str3[], char junto[]) {
    int cont = 0;
    for (int i = 0; i < ehStrlen(str); i++) junto[cont++] = str[i];
    for (int i = 0; i < ehStrlen(str3); i++) junto[cont++] = str3[i];
    junto[cont] = '\0'; 
    return junto;
}

char *ehStrfind(char str[], char find[]) {
    for (int i = 0; i < ehStrlen(str); i++) {
        if (str[i] == find[0]) {
            int cont = 1;
            for (int j = 1; j < ehStrlen(find); j++) {
                if (find[j] != str[i + j]) { cont = 0; break; }
            }
            if (cont == 1) {
                char posicao[4];
                sprintf(posicao, "%d ", i); 
                char temp[20] = "";
                ehStrcat(cat, posicao, temp); 
                for (int k = 0; k <= ehStrlen(temp); k++) cat[k] = temp[k];
            }
        }
    }
    return ehStrlen(cat) > 0 ? cat : "vazio"; 
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
    printf(ehStrcmp(str, str2) == 0 ? "\nStrings diferentes" : "\nStrings iguais");

    printf("\nEscolha quantos caracteres copiar para uma outra string: ");
    scanf("%d", &num);
    while (getchar() != '\n'); 
    printf("Copia da primeira com %d caracteres: ", num);
    printf("%s", ehStrncpy(str, copy, num));

    printf("\nAdicione um texto que se somara a primeira string: ");
    fgets(str3, sizeof(str3), stdin);
    str3[ehStrlen(str3) - 1] = '\0';
    printf("\nConcatenando 2 strings: %s", ehStrcat(str, str3, junto));

    printf("\nAdicione um texto para encontrar dentro da primeira string: ");
    fgets(find, sizeof(find), stdin);
    find[ehStrlen(find) - 1] = '\0';
    printf("\nPosicoes encontradas: %s\n", ehStrfind(str, find)); 
}