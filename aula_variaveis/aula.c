#include <stdio.h>

int main() {
    int idade = 20;
    float altura = 1.75;
    char letra = 'A';

    // %d - int, %f - float, %lf - double, %c char
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Sua idade e: %d", idade);

    int a = 10;
    int b = 3;

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao inteira: %d\n", a / b);
    printf("Resto: %d\n", a % b); 

    int numero_1 = 10;
    float numero_2 = 20.2;

    printf("%f", (float)numero_1 / numero_2);

    // ordem de procedencia
    // (), *  /, +  -, > < ==  
    int a = 10;
    int b = 5;
    int resultado = (a + b) > 10;
    
    printf("%d\n", a > b);
    printf("%d\n", a == b);
    printf("Resulttado da Expressao: %d\n", resultado);

    return 0;
}
