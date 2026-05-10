#include <stdio.h>

// 1. informa que a funcao existe
int somar(int a, int b);   

void teste(int x)
    { x = 10; } // ta alerando apenas a copia, não retorna nada
    
void depositar()
    { printf("Deposiito realizado\n"); }

void sacar()
    { printf("Saque realizado\n"); }

int main() {
    // ESTRUTURA DE SELECAO
    //=========================================

    // SWITCH CASE
     int opcao;

     printf("1- Saldo\n2- Extrato\nEscolha: ");
     scanf("%d", &opcao);

     switch (opcao) {
     case 1:
        printf("Seu saldo e R$ 100,00\n");
        break;
     case 2:
        printf("Exibindo extrato...\n");
        break;
     default:
        printf("Opcao inexistente!\n");
     } 

    // FUNCAO
    //=========================================

    // 2. chama para executar
    int res = somar(10, 5);
    printf("Soma: %d\n", res);
    printf("%d", somar(8, 9)); 

    int n = 5;
    teste(n);
    printf("%d", n);        //ainda imprime 5
    

    // SWITCH + FUNCAO
    //=========================================
    int opcao2;

    printf("1- Deposito\n2- Saque\nEscolha: ");
    scanf("%d", &opcao2);

    switch (opcao2) {
    case 1:
        depositar();
        break;
    case 2: 
        sacar();
        break;
    default:
        printf("Opcao invalida!");
        break;
    }


    return 0;
}

// 3. logica e retorno
int somar(int a, int b) {
    return a + b; 
}
