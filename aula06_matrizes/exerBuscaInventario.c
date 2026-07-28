#include <stdio.h>
#include <string.h>

char produtos[3][10];
char produtoBuscado[30];
int i, encontrado, resposta;

void lerProdutos(){
    for (i = 0; i < 3; i++) {
        printf("Digite o produto %d: ", i+1);
        fgets(produtos[i], 30, stdin);
        produtos[i][strcspn(produtos[i], "\n")] = 0;
    }
}

void buscarProduto() {
        encontrado = 0;     // resetar flag a cada busca

        printf("\nDigite o produto que deseja buscar: ");
        fgets(produtoBuscado, 30, stdin);
        produtoBuscado[strcspn(produtoBuscado, "\n")] = 0;

        for (i = 0; i < 3; i++) {
            if(strcmp(produtoBuscado, produtos[i]) == 0){
                printf("Produto em Estoque\n");
                encontrado = 1;
                break;
            } 
        }

        if (!encontrado) {
            printf("Nao encontrado\n");
        }
}

int perguntarRepeticao() {
    do {
        printf("\nDeseja tentar de novo? [0]-nao, [1]-sim: ");
        scanf("%d", &resposta);
        getchar(); 
        
        if (resposta != 0 && resposta != 1) {
            printf("\nDigite apenas 0 ou 1, por favor!\n");
        }
    } while (resposta != 0 && resposta != 1);
    
    return resposta;
}

int main() {
    printf("\n\t--- BUSCA DE INVENTARIO ---\n");
    
    lerProdutos();
    
    do { 
        buscarProduto();
        resposta = perguntarRepeticao();
    } while ( resposta == 1);    
    
    return 0;
}
