#include <stdio.h>

float temCelsius(float temFahrenheit);
float temFahrenheit(float temCelsius);
float leitura();

int main(){
    int opcao;
    float temperatura;
    
    printf("\n\t--- CONVERSOR DE TEMPERATURA ---\n");
    
    do {
        printf("\n\t\t>>> MENU <<<\n");
        printf("\t1- Celsius para Fahrenheit\n\t2- Fahrenheit para Celsius\n\t3- Sair\n\nEscola uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                temperatura = leitura();
                temFahrenheit(temperatura);
                break;
            case 2:
                temperatura = leitura();
                temCelsius(temperatura);
                break;
            case 3:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpcao invalida!\n");
                break;
            }
    } while (opcao != 3);
    
    
    return 0;
}

float temCelsius(float temFahrenheit) {
    float celsius = (temFahrenheit - 32) / 1.8;
    printf("Temperatura em Celsius: %.1f\n", celsius);
}

float temFahrenheit(float temCelsius) {
    float fahrenheit = (temCelsius * 1.8) + 32;
    printf("Temperatura em Fahrenheit: %.1f\n", fahrenheit);
}

float leitura() {
    float temperatura;
    
    printf("\nDigite a temperatura: ");
    scanf("%f", &temperatura);

    return temperatura; 
}
