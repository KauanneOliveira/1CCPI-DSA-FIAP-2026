#include <stdio.h>

int main(){
    // === EXER 1 ===
    int soma = 0;
    
    printf("\n--- EXIBICAO E SOMA DOS VALORES DE 1 A 10 ---\n");
    for (int i = 1; i < 11; i++ ){
        printf("%d\t", i);
        soma += i;
    }

    printf("\nA soma dos numeros de 1-10: %d", soma);

    // === EXER 2 ===
    float num = 1;
    float soma2;

    printf("\n\n--- EXIBICAO E SOMA DOS VALORES DO USUARIO ---\n");
    printf("[Quando nao desejar mais digitar os valores, envie o numero 0]\n");
    while(num != 0){
        printf("Digite um valor: ");
        scanf("%f", &num);
        soma2 += num;
    }

    printf("A soma dos numeros digitados: %.1f", soma2); 
    
    // === EXER 3 ===
    float numero;

    printf("\n\n--- EXIBICAO DE NUMERO POSITIVO ---\n");
    do {
        printf("Digite um numero: ");
        scanf("%f", &numero);
    } while (numero < 0);

    printf("\nNumero positivo digitado: %.1f", numero);
    

    // === EXER 4 ===
    // O cod deveria imprimir os numeros de 1 a 5
    /* for (int i = 1; i <= 5; i--) {
        printf("%d", i);
    } */

    printf("\n\n--- IDENTIFICACAO E CORRECAO DE ERRO (FOR) ---\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d\t", i);
    }

    // === EXER 5 ===
    // O cod deveria somar os numeros de 1 a 5
    /* int i = 1;
    int soma = 0;

    while (i <= 5) {
        soma += i;
    }

    printf("Soma = 5d\n", soma);
    } */

    printf("\n\n--- IDENTIFICACAO E CORRECAO DE ERRO (WHILE) ---\n");
    int i = 1;
    int soma = 0;

    while (i <= 5) {
        soma += i;
        i++;
    }

    printf("Soma = %d\n", soma);
    

    return 0;
}
