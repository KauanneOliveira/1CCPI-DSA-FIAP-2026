/* Crie um mini-sistema de biblioteca que utilize uma struct Livro */

#include<stdio.h>
#include<string.h>

typedef struct {
    int id;
    char nome[50];
    char status[15];
} Livro;

void statusLivro(Livro* livro, char status[]){
    // compara as duas string para ver se são iguais (== 0)
    if(strcmp(status, "emprestado") == 0 || strcmp(status, "disponivel") == 0){
        strcpy(livro->status, status);
    } else {
        printf("Status Incorreto!");
    }
}

int main() {
    Livro liv = {1, "Jogos Vorazes", "disponivel"};

    statusLivro(&liv, "emprestado");

    printf("\n\tDADOS DO LIVRO");
    printf("\nID: %d", liv.id);
    printf("\nNome: %s", liv.nome);
    printf("\nStatus: %s\n", liv.status);
    
    return 0;
}