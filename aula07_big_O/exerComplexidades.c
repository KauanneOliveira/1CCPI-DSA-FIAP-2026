// TRECHO 1
//=========================================
for (int i = 0; i < n; i++) {       // O(1), O(n + 1), O(1)
    printf("%d", i);                // O(1)
}
for (int j = 0; j < n; j++) {       // O(1), O(n + 1), O(1)
    printf("%d", j);                // O(1)
}

/*
    g(n) = (1 + n + 1 + 1 + 1) * 2
    g(n) = 2n + 8
    Complexidade Final [T(n)] = O(n)
*/


// TRECHO 2
//=========================================
for (int i = 0; i < n; i++) {       // O(n + 3)
    for (int j = 0; j < n; j++) {   // O(n + 3) + O(1) = O(n + 4)
        soma += i * j;              // esse O(1) é do for acima por estar dentro dele
    }
}

/*
    vai sempre prevalecer a expressão maior, no caso a O(n + 4)
    g(n) = (n + 4)^2
    g(n) = n^2 + 8n + 16
    Complexidade Final [T(n)] = O(n^2)
*/


// TRECHO 3
//=========================================
int i = n;                          // O(1)

while (i > 1) {                     // O(log n), O(1), O(1)
    i = i / 2;
    printf("%d", i);
}

/*
    prevalece a expressão maior
    g(n) = log n + 1 + 1
    g(n) = log n + 2
    Complexidade Final [T(n)] = O(log n)
*/

// TRECHO 4
//=========================================

#include <stdio.h>

int maiorElemento(int v[], int n) {
    int maior = v[0];   // 0(1)

    // não percorre o 0, inicia em 1, por isso é n-1
    for (int i = 1; i < n; i++) {   // 0(1), 0(n-1), 0(n-1)
        if (v[i] > maior) {         // 0(n-1)
            maior = v[i];           // 0(1)
        }
    }

    return maior; // 0(1)
    
    // soma de todos 0()
    // 0(n) = g(n) = 1 + 1 + n - 1 + n - 1 + n - 1 + 1
    // 0(n) = g(n) = 3n + 1
}

int main(void) {
    int vetor[] = {10, 25, 8, 40, 32, 70, 15};      // 0(7), pq é equivalente a int vetor[0] = 10 0(1), int vetor[1] = 25 0(1)
    
    // sizeof pega o tamanho do vetor em bytes (nesse caso só tem int q é 4 bytes, total dá 28 bytes)
    // ele divide por 1 espaço do vetor, q acaba sendo o minimo (4 bytes)
    // sendo assim 28 / 4 = 7 elemenos 
    int n = sizeof(vetor) / sizeof(vetor[0]);       // 0(1)

    int maior = maiorElemento(vetor, n);            // 0(3n+1) + 0(1)

    printf("Maior elemento: %d\n", maior);          // 0(1)

    return 0;                                       // 0(1)
    
    // soma de todos 0()
    // 0(n) = g(n) = 7 + 1 + 3n + 1 + 1 + 1 + 1
    // 0(n) = g(n) = 3n + 12
    // Complexidade Final [T(n)] 0(n), pq é o maior e o q tende ao infinito mais rápido (mais do q 12)
}


// TRECHO 5
//=========================================
#include <stdio.h>

int somaMatriz(int matriz[][3], int n) {
    int soma = 0;                           // 0(1)

    for (int i = 0; i < n; i++) {           // 0(1), 0(n), 0(n) = 2n + 1
        for (int j = 0; j < n; j++) {       // 0(1), 0(n), 0(n) , 0(1) = 2n +2 (o da soma é contabilizado com esse for
            soma += matriz[i][j];               
        }
    }
    
    // por ser for alinhado o resultado é o produto notavel das duas expressões
    // (2n+1)(2n+2)
    // 4n^2 + 4n + 2 

    return soma;                            // 0(1)
    
    // soma dos 0()
    // 0(n) = g(n) = 4n^2 + 4n + 2 + 1 + 1 
    // 0(n) = g(n) = 4n^2 + 4n + 4
}

int main(void) {
    int matriz[3][3] = {                    // 0(9)
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };      

    int resultado = somaMatriz(matriz, 3);  // 0(4n^2 + 6n + 4) + 0(1) - pq ta atribuindo a resultado

    printf("Soma = %d\n", resultado);       // 0(1)

    return 0;                               // 0(1)
    
    // soma dos 0()
    // 0(n) = g(n) = 9 + 4n^2 + 6n + 4 + 1 + 1 + 1
    // 0(n) = g(n) = 4n^2 + 6n + 16
    // Complexidade Final [T(n)] = 0(n^2)
}


// TRECHO 6
//=========================================
#include <stdio.h>

void imprimirTriangulo(int n) {
    for (int i = 0; i < n; i++) {           // 0(1), 0(n), 0(n), 0(1) = 2n + 2
            // quando um for depende do outro é soma e não produto notavel
            // sabemos que depende quando j < i, quando a interação depende de i
        for (int j = 0; j <= i; j++) {      // 0(1), 0(n), 0(n), 0(1) = 2n + 2
            printf("* ");                   
        }
                                    
        printf("\n");
    }
}

// soma de todos 0()
// 0(n) = g(n) = 2n + 2 + 2n + 2
// 0(n) = g(n) = 4n + 4

int main(void) {
imprimirTriangulo(5);                       // 0(4n+4)
    return 0;                               // 0(1)
}

// soma dos 0()
// 0(n) = g(n) = 4n + 4 + 1
// 0(n) = g(n) = 4n + 5
// Complexidade Final [T(n)] = 0(n)