#include<stdio.h>

// CALCULADORA DE FIBONACCI
//=========================================

// n é a posição que vc deseja saber o valor na sequência de fibonacci
// n-ésimo é o valor que vai estar lá

int fib(int n) {
    if(n <= 1) {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main(void) {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Posicao %d: %d", n, fib(n));
    
    return 0;
}