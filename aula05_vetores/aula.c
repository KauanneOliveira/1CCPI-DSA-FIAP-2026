#include<stdio.h>

void exibir_vetor(int vetor[], int n){
    // exibir valores dentro do vetor
    for(int i = 0; i < n; i++){
        int valor = vetor[i];
        printf("O indice do valor e: %d\nO valor do vetor e: %d\n\n",i ,valor);
    }
}

int main(){
    // VETORES
    //=========================================
    int valores[5], tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    valores[tamanho];

    exibir_vetor(valores, tamanho);
    
    /*
    // exibicao sem funcao 
    for(int i = 0; i < 3; i++){
        int valor = valores[i];
        printf("O indice do valor e: %d\nO valor do vetor e: %d\n\n",i ,valor);
    } 
    exibir_vetor(valores);

    // exibicao com funcao
    // Através da interação do usuário, armazenar os valor 1, 5, 4
    for(int i = 0; i < 3; i++){
        printf("Digite o valor que gostaria de armazenar no indice %d: ", i);
        scanf("%d", &valores[i]);
    }
    exibir_vetor(valores); */

    return 0;
}