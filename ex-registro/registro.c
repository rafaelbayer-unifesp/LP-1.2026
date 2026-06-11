#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define turma 10

typedef struct {
    int RA;
    char nome[30];
    float nota[3];
    float frequencia;

} Aluno;

Aluno Alunos[turma];
int totalAlunos = 0;

void menu();
void inserir();
void remover();
void visualizar();
void buscar();
int existe();

int main() {
    printf("Registro de aluno\n\n");
    menu();
    printf("\nObrigado pelo uso!");
    return 0;
}

void menu(){
    int num, rep;
    printf("Escolha uma opcao no menu: ");
    printf("\n1 - Inserir ");
    printf("\n2 - Remover ");
    printf("\n3 - Visualizar ");
    printf("\n4 - Buscar ");
    printf("\nQualquer outro valor ira sair");
    printf("\nInsira a opcao:  ");
    scanf("%d", &num);
    printf("\n");
    switch (num) {
        case 1:
            inserir();
            break;
        case 2:
            remover();
            break;
        case 3:
            visualizar();
            break;
        case 4:
            buscar();
            break;
    }
    printf("\n\nGostaria de voltar ao menu? Digite 1 para sim: ");
    scanf("%d", &rep);
    if (rep == 1) {
        menu();
    }

}

int existe(int RA) {
    for (int i=0; i<turma; i++) {
        if (Alunos[i].RA == RA) {
            return i;
        }
    }
    return 0;
}

void inserir() {
    int RA;
    char nome[30];
    float nota[3], frequencia;
    printf("Insira o RA do aluno: ");
    scanf("%d", &RA);
    if (existe(RA) != 0){
        printf("Este RA ja existe");
    } else {
        Alunos[totalAlunos].RA = RA;
        printf("Insira o nome do aluno: ");
        getchar();
        fgets(nome, sizeof(nome), stdin);
        nome[strlen(nome) - 1] = '\0';
        strcpy(Alunos[totalAlunos].nome, nome);
        printf("Insira as 3 notas do aluno: \n");
        for (int i=0; i<3; i++) {
            printf("Nota %d: ", i+1);
            scanf("%f", &nota[i]);
            Alunos[totalAlunos].nota[i] = nota[i];
        }
        printf("Insira a frequencia do aluno: ");
        scanf("%f", &frequencia);
        Alunos[totalAlunos].frequencia = frequencia;
        totalAlunos++;
        printf("Cadastro realizado!");
    }
    
}

void remover() {
    int RA;
    printf("Insira o RA que deseja remover: ");
    scanf("%d", &RA);
    if (existe(RA) != 0) {
        for (int j = existe(RA); j < totalAlunos - 1; j++) {
                Alunos[j] = Alunos[j + 1]; // puxa dados dos alunos na frente para trás
            }
            memset(&Alunos[totalAlunos - 1], 0, sizeof(Aluno)); // limpa a ultima variavel pra ficar vazia
            totalAlunos--;

            printf("Aluno removido com sucesso!");
    } else {
        printf("RA nao encontrado.");
    }
}

void visualizar() {
    if (totalAlunos == 0) {
        printf("Nenhum aluno cadastrado.");
    } else {
        for (int i=0; i<totalAlunos; i++) {
            printf("\nRA: %d", Alunos[i].RA);
            printf("\nNome: %s", Alunos[i].nome);
            printf("\nNotas: %f, %f, %f", Alunos[i].nota[0], Alunos[i].nota[1], Alunos[i].nota[2]);
            printf("\nFrequencia: %f", Alunos[i].frequencia);
            printf("\n----------------------");
        }
    }
}

void buscar() {
    int RA;
    printf("Insira o RA a buscar: ");
    scanf("%d", &RA);
    if (existe(RA) != 0) {
        printf("\nRA: %d", Alunos[existe(RA)].RA);
        printf("\nNome: %s", Alunos[existe(RA)].nome);
        printf("\nNotas: %f, %f, %f", Alunos[existe(RA)].nota[0], Alunos[existe(RA)].nota[1], Alunos[existe(RA)].nota[2]);
        printf("\nFrequencia: %f", Alunos[existe(RA)].frequencia);

    } else {
        printf("RA nao encontrado");
    }
}
