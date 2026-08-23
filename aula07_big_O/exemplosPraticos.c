//  LOOP SIMPLES
//=========================================

int somarVetor(int arr[], int n) {
    intsoma = 0;                     // O(1)
        // O(1), O(n+1), O(1)
    for( int i = 0; i < n; i++) {    // O(n + 3)
        soma += arr[i];              // O(1)
    }
    return soma; O(1)                // O(1)
}

    // descobrindo n
    /*  g(n) = 1 + n + 3 +1 + 1
        g(n) = n + 6
        Complexidade Final = O(n)

        T(n) >= c * g(n)
        T(n) >= 4 * (n + 6)      - 4 é uma variavel exemplo
        T(n) >= 4n + 24
        n + 6 >= 4n + 24
        -4n + n >= 24 - 6
        -3n >= 18
        n >= -6   ----->   n <= 6
    */

//  LOOPS ANINHADOS
//=========================================

// Loops Independentes 
for (int i = 0; i < n; i++) {
    // O(n)
}
for (int j = 0; j < m; j++) {
    // O(m)
}

    /* Regra da Soma
        O(n + m) → O(max(n, m)) 
    Quando os loops estão um após o outro, soma suas complexidades.*/

// Loops Aninhados
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // O(n * n)
    }
}

    /*Regra do Produto:
        O(n * n) → O(n^2)
    Quando um loop está dentro de outro, multiplica suas complexidades*/