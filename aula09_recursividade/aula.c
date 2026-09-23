// RECURSÃO
//=========================================

/* Iteração (for/while) - tarefas simples e repetitivas
   Recursão - estrutura auto-similar, como navegação em árvores, grafos ou algoritmos de dividir e conquistar
*/

#include<stdio.h>

// Recursão Comum
long long fatorial(int n) {

    // 1 - Caso Base - sem ele entra em um loop infinito
    if (n == 0) {
        return 1;       
    }

    // 2 - Caso Recursivo
    return n * fatorial(n -1);
}

// Recursão de Cauda
/* Neste caso aqui não precisa desempilhar depois de chegar no caso base
   quando chega nele já está com o resultado
*/
int fat_cauda(int n, int acc) {
    // 1 - Caso Base
    if (n == 0) 
        return acc;       // acc acumula o resultado parcial     

    // 2 - Caso Recursivo
    return fat_cauda(n - 1, n * acc);    
}

int main(void) {

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%d! = %lld\n", n, fatorial(n));

    return 0;
}


/*
    Recursão Comum
        fatorial(4) → não é 0 → retorna 4 * fatorial(3)
        fatorial(3) → retorna 3 * fatorial(2)
        fatorial(2) → retorna 2 * fatorial(1)
        fatorial(1) → retorna 1 * fatorial(0)
        fatorial(0) → caso base → retorna 1
        Agora o computador volta “desempilhando”:
        fatorial(1) = 1 * 1 = 1
        fatorial(2) = 2 * 1 = 2
        fatorial(3) = 3 * 2 = 6
        fatorial(4) = 4 * 6 = 24

    Recursão de Cauda
        fat_cauda(4, 1) → chama fat_cauda(3, 4*1) → fat_cauda(3, 4)fat_cauda(3, 4) → chama fat_cauda(2, 3*4) → fat_cauda(2, 12)
        fat_cauda(2, 12) → chama fat_cauda(1, 2*12) → fat_cauda(1, 24)
        fat_cauda(1, 24) → chama fat_cauda(0, 1*24) → fat_cauda(0, 24)fat_cauda(0, 24) → caso base → retorna 24

*/