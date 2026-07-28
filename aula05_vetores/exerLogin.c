#include<stdio.h>
#include<string.h>

char usuario[] = "Coley";
char senha[] = "1234";
char usuarioDigitado[20];
char senhaDigitada[20];
int resposta;

void lerCredenciais() {
    printf("Usuario: ");
    fgets(usuarioDigitado, 20, stdin);
    usuarioDigitado[strcspn(usuarioDigitado, "\n")] = 0;

    printf("Senha: ");
    fgets(senhaDigitada, 20, stdin);
    senhaDigitada[strcspn(senhaDigitada, "\n")] = 0;

}

int validarLogin() {
    if (strcmp(usuario, usuarioDigitado) == 0 && strcmp(senha, senhaDigitada) == 0 ) {
        puts("Acesso Permitido");
        return 1;
    } else {
        puts("Acesso Negado");
        return 0;
    }
}

int perguntarRepeticao() {
    do {
        printf("Quer tentar de novo? [0]-nao, [1]-sim: ");
        scanf("%d", &resposta);
        getchar(); // limpa o \n do buffer
        
        if (resposta != 0 && resposta != 1) {
            printf("Digite apenas 0 ou 1, por favor!\n");
        }
    } while (resposta != 0 && resposta != 1);
    
    return resposta;
}

int main() {
    do{
        printf("\n\t--- LOGIN ---\n");

        lerCredenciais();
        puts("");
        
        // encerra se o login estiver certo
        if (validarLogin()) {
            break;
        }
        

        resposta = perguntarRepeticao();
    } while (resposta == 1);
    
    return 0;
}
