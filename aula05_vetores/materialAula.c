#include<stdio.h>
#include<string.h>

int main(){
    // VETORES CARACTERES
    //=========================================

    // o tamanho de um vetor de string e n+1
    // pois o ultimo espaco e reservado para p \0 (nulo)
    char s1[5] = "Aula";
    char s2[] = "FIAP";
    char s3[] = {'o', 'i', '\0'};
    char s4[20]; 
    char nome[20]; 

    // LEITURAS
    // le até o espaco (risco de Buffer Overflow)
    printf("Digite um nome: ");
    scanf("%s", nome);
    printf("Nome armazenado: %s \n", nome);

    // limpa o resto da linha para não atrapalhar o fgets
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    // fgets lê até o limite, incluindo espaçosr
    printf("Digite um nome: ");
    fgets(nome, 20, stdin);              // le 19 letras + \0
                                         // só que ele salva o \n tbm, se não couber, aguarda no buffer
                                         // por causa disso é n+2 na vdd
                                         // stdin - entrada padrao (teclado)
    nome[strcspn(nome, "\n")] = 0;       // remove o \n que o fgets deixa no final da string
    printf("Nome armazenado: %s", nome); 

    // EXIBIÇÕES 
    printf("Mensagem: %s\n", s1);        // mensagens formatadas
    puts(s1);                            // mensagens simples, já pula uma linha 
    

    // FUNCOES DA <STRING.H>
    int tam;

    // strlen() - tamanho do vetor (exceto o final '\0')
    tam = strlen(s2);                   
    printf("Tamanho: %d\n", tam);      

    // strcpy(destino, origem) - copia o vetor
    strcpy(s4, s2);
    printf("s4 agora e: %s\n", s4);

    // strcat(destino, origem) - concatena duas strings
    // a string de origem deve ter espaço suficiente
    strcat(s4, s1);
    printf("s4 concatenada com s1: %s\n", s4);
    
    // strcmp - compara se duas strings são iguais
    if(strcmp(s3, nome) == 0) {
        puts("Strings iguais!");
    } else {
        puts("Diferentes!");
    }

    return 0;
}