#include <stdio.h>

int main(){
    // exercicio exemplo
    //int x = 2 + 3 * 4;

    // analise operacional
    // 3 * 4 = 12
    // 2 + 12 = 14

    // resultado final
    //  x = 14

    // analise logica
    // multiplicacao acontece antes da soma
   
    // EXER 1
    // 1º soma em parentes, 2º multiplicacao
    int a = (2 + 3) * 4;        // 2 + 3 = 5
                                // 5 * 4 = 20
    printf("a = %d\n", a);      // a = 20  

    // EXER 2
    // 1º subtracao em parentes, 2º multiplicacao
    int b = (2 - 3) * 4;        // 2 - 3 = - 1
                                // -1 * 4 = -4
    printf("b = %d\n", b);      // b = -4 

    // EXER 3
    // divisao inteira com inteiros
    float c = 10 / 3;              // 10 / 3 = 3.3333                                
    printf("c = %.2f\n", c);       // c = 3.00

    // EXER 4
    // divisao inteira com int e float
    float d = 10 / 3.0 ;           // 10 / 3.0 = 3.3333                                
    printf("d = %.2f\n", d);       // d = 3.33

    // EXER 5
    // 1º divisao, 2º soma
    int e = 5 + 7 / 2 ;          // 7 / 2 = 3.5
                                 // 5 + 3.5 = 8.5                               
    printf("e = %d\n", e);       // e = 8

    // EXER 6
    // comparacao 'maior que' de dois numeros inteiros
    int f = 10 > 5 ;             // 10 > 5                                
    printf("f = %d\n", f);       // f = 1 

    // EXER 7
    // comparacao 'igual que' de dois numeros inteiros
    int g = 10 == 5 ;            // 10 == 5                              
    printf("g = %d\n", g);       // g = 0 

    // EXER 8
    // 1º parenteses, 2º comparacao
    int h = (2 + 3) > (4 * 2);  // 2 + 3 = 5, 4 * 2 = 8
                                // 5 > 8                               
    printf("h = %d\n", h);      // h = 0

    // EXER 9
    // 1º parenteses, 2º soma
    int i = (10 / 2) + (3 > 1);  // 10 / 2 = 5, 3 > 1 = 1
                                 // 5 + 1                               
    printf("i = %d\n", i);       // i = 6

    // EXER 10
    // 1º parenteses, 2º multiplicacao
    int j = (5 > 3) * 10;        // 5 > 3 = 1
                                 // 1 * 10 = 10                               
    printf("j = %d\n", j);       // j = 10

    // EXER 11
    // 1º parenteses, 2º divisao
    int k = (8 + 2) / (3 + 2);   // 8 + 2 = 10, 3 + 2 = 5
                                 // 10 / 5 = 2                               
    printf("k = %d\n", k);       // k = 2

    // EXER 12
    // 1º parenteses, 2º divisao, 3º soma
    int l = (8 + 2) / 3 + 2;     // 8 + 2 = 10
                                 // 10 / 3 = 3 
                                 // 3 + 2 = 5                              
    printf("l = %d\n", l);       // l = 5

    // EXER 13
    // 1º divisao, 2º multiplicacao
    int m = 5 / 2 * 2;     // 5 / 2 = 2
                                 // 2 * 2 = 4                             
    printf("m = %d\n", m);       // m = 4

    // EXER 14
    // 1º parenteses, 2º soma
    int n = (10 > 5) + (3 * 2);  // 10 > 5 = 1, 3 * 2 = 6
                                 // 1 * 6 = 7                             
    printf("n = %d\n", n);       // n = 7

    return 0;
}
