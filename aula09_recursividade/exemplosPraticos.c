// EXEMPLOS DE RECURSÃO
//=========================================

#include <stdio.h>

// FUNÇÕES
void contagem(int n) {
    // Caso Base
    if (n == 0)
    {
        printf("Fim!\n");
        return;
    }

    // Caso Recursivo
    printf("%d\t", n);
    contagem(n - 1);
    printf("%d\t", n);       // print depois da recursão vai mostrar o resultado de retorno (o correto quando quer mostrar o calculado)
}

int somatorio(int n) {
    if (n == 0)
        return 0;

    return n + somatorio(n - 1);
}

long long potencia(int base, int exp) {
    if (exp == 0)
        return 1;

    return base * potencia(base, exp - 1);
}

int somaVetor(int v[], int n) {
    if (n == 0)
        return 0;

    return v[n - 1] + somaVetor(v, n - 1);
}

int maiorElemento(int v[], int n) {
    if (n == 1)      
        return v[0]; 

    int anterior = maiorElemento(v, n - 1);

    /* O if não roda a cada nível durante a descida,
        durante a descida só empilha o  maiorElemento(v, n - 1) e fica aguardando o resultado
        Só quando base no caso base e começa a desempilar que o if vai comparar em cada nível 
     */
    if (v[n - 1] > anterior)    
        return v[n - 1];  

    return anterior; 
}

void inverterString(char texto[], int i) {
    if (i < 0)
        return;

    printf("%c", texto[i]);
    inverterString(texto, i - 1);
}

int palindromo(char texto[], int inicio, int fim) {
    // Caso Base
    if (inicio >= fim)
        return 1;

    if (texto[inicio] != texto[fim])
        return 0;

    return palindromo(texto, inicio + 1, fim - 1);
}

// só funciona em um vetor ordenado
// é a famosa Busca Binária
int busca(int v[], int inicio, int fim, int x) {
    if (inicio > fim) 
        return -1;

    // fazendo dessa maneira (fim - inicio) tem menor 
    // chances de overflow 
    int meio = inicio + (fim - inicio) / 2;

    if (v[meio] == x)
     return meio;

    if (x < v[meio])
        return busca(v, inicio, meio -1, x);
    
    return busca(v, meio + 1, fim, x);
}

// PROGRAMA PRINCIPAL
int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    char texto[4] = "FIAP";
    char textoPalindromo[5] = "ARARA";        

    contagem(5);

    printf("\nSomatorio: %d", somatorio(5));

    printf("\nPotencia: %lld", potencia(2, 5));

    printf("\nSomatorio de Vetor: %d", somaVetor(vetor, 5));

    printf("\nTexto invertido: ");
    inverterString(texto, 4);      

    printf("\nA palavra %c eh palindromo (1- sim; 2- nao): %d", textoPalindromo, palindromo(textoPalindromo, 0, 4));

    printf("\nO numero 5 esta no indice (-1: nao achou): %d", busca(vetor, 0, 4, 5));

    return 0;
}