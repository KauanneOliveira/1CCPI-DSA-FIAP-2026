#include <stdio.h>

void contar(int i){
    if(i > 5) return;

    printf("%d\t", i);
    contar(i + 1);
}

int main() {
    // CONDICAO
    //=========================================

    // IF 
    int idade = 18;
    int media = 7;

    if(idade >= 18) {
        printf("Maior de idade\n");
    }

    // IF, ELSE IF, ELSE 
    if(media >= 9){
        printf("Excelente\n");
    } else if (media >= 6){
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    
    int media2 = 9;
    int falta = 68;

    if(media2 >= 9 && falta >=75){
        printf("Excelente e Aprovado!\n");
    } else if(media2 >= 6 && falta >=75){
        printf("Aprovado\n");
    } else if(media2 < 6 && falta >=75){
        printf("Reprovado, media insulficiente\n");
    } else {
        printf("Reprovado, falta insulficiente\n");
    }

    // LACOS DE REPETICAO
    //=========================================

    // FOR
    for (int i = 0; i < 5; i++){
        printf("%d\t", i);
    }

    printf("\n");
    
    // WHILE
    int i = 0;
    while (i < 5){
        printf("%d\t", i);
        i++;
    }
    
    printf("\n");

    // DO-WHILE
    int i2 = 0;
    do{
        printf("%d\t", i2);
        i2++;
    } while (i2 < 5);
    
    // WHILE VS DO-WHILE
    // while testa antes
    // do-while executa antes 

    printf("\n");

    // GOTO
    // nao é usado mais, gerava dificuldade na leitura 
    int i3 = 1;
    
    inicio: 
        if(i3 >= 5) return 0;

        printf("%d\t", i3);
        i3++;

        goto inicio;

    // RECURSAO
    // baseada em chamadas de funcao
    // a funcao vai chamar ela mesmoa até atingir a condicao
    contar(1);

    return 0;
}

