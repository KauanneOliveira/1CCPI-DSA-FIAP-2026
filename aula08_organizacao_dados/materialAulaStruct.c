#include<stdio.h>
#include<string.h>



int main() {
    // STRUCT
    //=========================================
    struct Aluno {
        int rm;
        char nome[50];
        float nota;
    };      // ; é obrigatório

    struct Aluno aluno1;

    aluno1.rm = 12345;
    aluno1.nota = 9.5;
    strcpy(aluno1.nome, "Joao Silva");

    printf("RM: %d\n", aluno1.rm);
    printf("Nome: %s\n", aluno1.nome);
    printf("Nota: %.1f\n", aluno1.nota);
    
    puts("");
    float bonus = aluno1.nota + 0.5;
    printf("Nota com bonus: %.1f\n", bonus);

    // TYPEDEF
    //=========================================
    // sintaxe: typedef tipo_original novo_nome
    typedef unsigned long ulong;
    typedef int inteiro;

    ulong populacao = 8000000;
    inteiro idade = 25;

    /*
        // elimina a necessidade de colocar sempre struct ao declarar variavel

        typedef struct {
            int rm;
            char nome[50];
            float nota;
        } Aluno;

        // é assim, ao inves de ser 'struct Aluno a1;'
        Aluno a1, a2;

        // Uso normal com o operador ponto:
        a1.rm = 98765;
        a1.nota = 10.0;
    */

    // STRUCTS ANINHADAS
    //=========================================
    typedef struct{
        char rua[50];
        int numero;
    } Endereco;
    
    typedef struct {
        char nome[50];
        Endereco end;       // Struct aninhada
    } Cliente;
    
    // Uso no código:
    Cliente c1;
    strcpy(c1.nome, "Ana");
    strcpy(c1.end.rua, "Paulista");
    c1.end.numero = 100;    // Acesso duplo

    puts("");
    printf("Nome: %s\n", c1.nome);
    printf("Rua: %s\n", c1.end.rua);
    printf("Numero: %d", c1.end.numero);

    return 0;
}