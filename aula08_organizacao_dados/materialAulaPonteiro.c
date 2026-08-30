#include<stdio.h>
#include<string.h>

typedef struct {
    int rm;
    char nome[50];
    float nota;
} Aluno;

// por parametro e possivel alterar o dado original e não precisa retornar
void atualizarNotas(Aluno* p, float nova) {
    if (nova >= 0 && nova <= 10) {
        p->nota = nova;
    }
}

int main() {
    // PONTEIRO
    //=========================================

    // declarar um ponteiro - o * vai no tipo
    // usar o ponteiro - o * vai no ponteiro.

    printf("\n\tEXIBINDO PARAMETROS");

    // Endereço & - passa o endereco da variavel
    int x = 10;
    int* ptr = &x;
    printf("\nEndereco: %p", ptr);        // vai exibir o endereco

    // Desferencia * - acessa o valor guardado no endereço
    int valor = *ptr;
    *ptr = 20;

    printf("\nValor Guardado no endereco: %d\n", *ptr);        // vai exibir o valor

    // PONTEIRO + STRUCT
    //=========================================
    Aluno a1 = {123, "Ana", 9.0};
    Aluno* ptr2 = &a1;

    // EXIBIÇÃO 1
    printf("\n\tMUDANNDO VALOR POR PARAMETRO");

    // forma 1: desferencia + ponto
    (*ptr2).nota = 6.0;
    printf("\nNota nova (desferencia): %.2f", a1.nota);

    // forma 2: operador seta (recomendado)
    ptr2->nota = 10.0;
    printf("\nNota nova (seta): %.2f\n", a1.nota);

    // EXIBIÇÃO 2
    printf("\n\tEXIBINDO DADOS DO ALUNO PELO OPERADOR SETA");
    printf("\nRM: %d",ptr2->rm);
    printf("\nNome: %s", ptr2->nome);
    printf("\nNota: %.2f\n", ptr2->nota);

    // PONTEIRO + FUNÇÃO
    //=========================================

    // passa o endereco com &
    printf("\n\tEXIBINDO NOVA MODIFICADA NA FUNCAO");
    atualizarNotas(&a1, 9.5);
    printf("\nNova nova (funcao): %.2f\n", a1.nota);

    // PONTEIRO + VETORES DE STRUCTS
    //=========================================
    Aluno turma[3];     // vetor de 3 alunos
    Aluno* ptr3 = turma;

    ptr3->rm = 101;     // indice 0 vetor
    ptr3++;             // indice 1 do vetor
    ptr3->rm = 102;

    printf("\n\tEXIBINDO VALORES DE UM VETOR STRUCT POR PONTEIRO");
    for(int i = 0; i < 3; i++) {
        printf("\n%d", (turma + i)->rm);        // // (turma + i)->rm = turma[i].rm 
    }

    return 0;
}
