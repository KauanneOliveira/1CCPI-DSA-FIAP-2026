/* Escreva um programa em C que defina e utilize uma
estrutura para gerenciar produtos de um estoque. */

#include<stdio.h>
#include<string.h>

typedef struct {
    int id;
    char nome[50];
    float preco;
} Produto;

int main() {
    Produto p1;

    // LEITURAS
    printf("\tFORMULARIO DO PRODUTO\n");

    printf("Digite o ID: ");
    scanf("%d", &p1.id);

    // limpeza do buffer para não pular o fgets
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite o nome: ");
    fgets(p1.nome, 50, stdin);
    p1.nome[strcspn(p1.nome, "\n")] = 0;

    printf("Digite o preco: ");
    scanf("%f", &p1.preco);

    // EXIBIÇÕES
    printf("\n\tDADOS DO PRODUTO\n");
    printf("ID: %d\n", p1.id);
    printf("Nome: %s\n", p1.nome);
    printf("Preco: %.2f", p1.preco);

    return 0;
}