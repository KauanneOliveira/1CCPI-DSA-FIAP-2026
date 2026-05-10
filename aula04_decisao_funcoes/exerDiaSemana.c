#include <stdio.h>

int main(){
    int numeroDia;
    
    printf("\n--- CALCULADORA DE DIAS ---\n");
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &numeroDia);

    switch (numeroDia) {
    case 1:
        printf("1 = Domingo");
        break;
    case 2:
        printf("2 = Segunda");
        break;
    case 3:
        printf("3 = Terca");
        break;
    case 4:
        printf("4 = Quarta");
        break;
    case 5:
        printf("5 = Quinta");
        break;
    case 6:
        printf("6 = Sexta");
        break;
    case 7:
        printf("7 = Sabado");
        break;
    default:
        printf("Opcao Invalida!");
        break;
    } 
    
    return 0;
}

