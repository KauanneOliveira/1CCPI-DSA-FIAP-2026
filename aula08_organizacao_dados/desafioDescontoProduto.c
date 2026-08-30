/* Crie uma função que receba o endereço de um Produto e aplique uma porcentagem de desconto no seu preço.*/

#include<stdio.h>

typedef struct {
    int id;
    char nome[50];
    float preco;
} Produto;

void aplicarDesconto(Produto* p, float desc) {
    // Calcule e atualize o preço aqui
    if(desc > 0) {
        p->preco = p->preco - (p->preco * (desc/100));
    }
}


int main() {
    printf("\n\tCALULADORA DE DESCONTOS");
    
    Produto prod = {1, "Teclado", 100.0};

    // Chame a função passando o endereço
    aplicarDesconto(&prod, 10.0);
    printf("\nPreco com desconto: %.2f\n", prod.preco);

    return 0;
}