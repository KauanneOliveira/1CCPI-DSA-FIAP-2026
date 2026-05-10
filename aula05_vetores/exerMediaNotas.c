// Usuario deve digitar a quantidade notas ele deseja ter a media, além de inserir as notas

#include <stdio.h>

int main() {
    int qtdNotas;

    printf("Digite a quantidade de notas para o calculo da media: ");
    scanf("%d", &qtdNotas);
    float notas[qtdNotas];
    
    float soma;
    
    for(int i = 0; i < qtdNotas; i++){
        printf("\nDigite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    printf("\nA media do aluno e: %.1f\n", soma/qtdNotas);


    return 0;
}