// PROGRAMA QUE COMPARA SOMAR OS ELEMENTO DE UM VETOR 
// USANDO ITERAÇÃO(FOR) E RECURSÃO

#include <stdio.h>
#include <time.h>       // para medir tempo
#include <stdlib.h>     // para gerar numeros aleatorios

#define TAMANHO 10000
#define pi 3.1416

// Somatório Recursivo
int somaVetor(int vetor[], int n) {
    if (n == 0) {
        return 0;
    }

    return vetor[n - 1] + somaVetor(vetor, n - 1);
}

int main(void)
{
    // variáveis para medir o tempo
    clock_t inicio_for, fim_for, inicio_recursivo, fim_recursivo;
    double tempo_cpu;

    int vetor[TAMANHO];

    // inicializa o gerador de números aleatórios usando a hora atual
    // vai garantir que os numeros mudem a cada execução
    srand(time(NULL));

    // preenche o vetor com números aleatórios
    for (int i = 0; i < TAMANHO; i++) {
        // gera números entre 0 e 99
        vetor[i] = rand() % 100;
    }

    // sizeof - retorna o tamanho em bytes
    // essa divisão é do tamanho total em bytes do vetor / tamanho em bytes de um elemento do vetor
    // assim se descobre quantos elementos tem no vetor
    int n = sizeof(vetor) / sizeof(vetor[0]);

    // Loop For
    inicio_for = clock();               // clock() pega o tempo de CPU atual
    int soma = 0;

    for(int i = 0; i < n; i++){
        soma += vetor[i];
    }

    printf("Soma = %d\n", soma);
    fim_for = clock();

    // CLOCKS_PER_SEC - constante que diz quantos “ticks” equivalem a 1 segundo
    tempo_cpu = ((double)(fim_for - inicio_for)) / CLOCKS_PER_SEC;
    printf("O codigo levou %f segundos para ser executado (for).\n", tempo_cpu);



    // Somatória por Recursão
    inicio_recursivo = clock();
    printf("Soma = %d\n", somaVetor(vetor, n));
    fim_recursivo = clock();
    tempo_cpu = ((double)(fim_recursivo - inicio_recursivo)) / CLOCKS_PER_SEC;
    printf("O codigo levou %f segundos para ser executado (recursao).\n", tempo_cpu);

    return 0;
}