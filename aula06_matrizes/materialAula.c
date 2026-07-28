#include<stdio.h>
#include<string.h>

int main() {
    // MATRIZ
    //=========================================

    int i, j;
    int mat[3][3];

    // EXIBIÇÃO
    /*
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    } */
    
    // LEITURA
    char alunos[3][50];

    for (i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        fgets(alunos[i], 50, stdin);
    }

    puts("");

    for (i = 0; i < 3; i++) {
        printf("Aluno %d: %s", i+1, alunos[i]);
    } 

    // copiando tudo para a linha 0
    strcpy(alunos[0], "Joao Silva");

    puts("");

    if (strcmp(alunos[0], "Joao Silva") == 0) {
        printf("Aluno 1: %s\n", alunos[0]);
        printf("Nome encontrado!");
    }

    int tam = strlen(alunos[0]);    

    return 0;
}
