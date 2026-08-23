
// ANÁLISE DE ALGORITMOS E COMPLEXIDADE
//=========================================

// NOTAÇÃO BIG O
// ====== f(n) = O(g(n)) ======
// Sendo que, f(n) <= c * g(n)

/*      ______________________________________
        | Tabela Comparativa de Complexidade |
        | Complexidade      | Situação       |
        | O(log n), O(1)    | Excelente      |
        | O(n)              | Bom            |
        | O(n log n)        | Médio          |
        | O(n^2)            | Ruim           |
        | O(2^n), O(n!)     | Horrível       |   
        ______________________________________ */
        
//=========================================

// Complexidade Constante - O(1)
    /* acessar elementos de um vetor pelo indice
       operacoes aritmeticas
       atribuicao de variavel
       comparacao de dois numeros */

int valor = vetor[500];             // O(1)
int resultado = (a + b) * 10;       // O(1)

void imprimirPrimeiro(int arr[]) {{
    printf("%d", arr[0]);           // O(1)
}}


// Complexidade Logarítmica - O(log n)
    /* busca binária em um vetor ordenado*/

int buscaBinaria(int arr[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {          // O(log n)
        int meio = inicio + (fim - inicio) / 2;

        if (arr[meio] == chave) {
            return meio;             // O(1)
        }
        else if (arr[meio] < chave) {
            inicio = meio + 1;       // O(1)
        }
        else {
            fim = meio - 1;          // O(1)
        }
    }
    return -1;                       // O(1)
}

// Complexidade Linear - O(n)
    /* busca linear
       soma de elementos
       encontrar o maior valor em um vetor */

void exibirVetor(int arr[], int n) {
    for(int i = 0; i < n; i++) {     // O(n)
        printf("%d", arr[i]);        // O(1)
    }
}

//  Complexidade Linear-Logarítmica - O(n log n)
    /* merge sort
       quick sort
       heap sort */

void merge(int arr[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)     // O(n)
        L[i] = arr[inicio + i];
    for (int j = 0; j < n2; j++)     // O(n)
        R[j] = arr[meio + 1 + j];

    int i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) {       // O(n)
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) arr[k++] = L[i++]; // O(n)
    while (j < n2) arr[k++] = R[j++]; // O(n)
}

void mergeSort(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        mergeSort(arr, inicio, meio);    // O(log n)
        mergeSort(arr, meio + 1, fim);   // O(log n)
        merge(arr, inicio, meio, fim);   // O(n)
    }
}

//   Complexidade Quadrática - O(n^2)
    /* bubble sort
       selection sort */

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {          // O(n)
        for (int j = 0; j < n - i - 1; j++) {  // O(n)
            if (arr[j] > arr[j + 1]) {         // O(1)
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//   Explosão Combinatória - O(2^n) e O(n!)
    /* O(2^n) - Exponencial
        recursão sem memorização (ex.: Fibonacci ingênuo)
       O(n!) - Fatorial
        permutação (ex.: caixeiro viajante por força bruta) */

int fibonacci(int n) {
    if (n <= 1) return n;                      // O(1)
    return fibonacci(n - 1) + fibonacci(n - 2); // O(2^n)
}

void permutacoes(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);                   
    } else {
        for (int i = l; i <= r; i++) {         // O(n!)
            // troca caracteres
            char temp = str[l];
            str[l] = str[i];
            str[i] = temp;

            permutacoes(str, l + 1, r);        // O(n!)
            
            // desfaz troca
            temp = str[l];
            str[l] = str[i];
            str[i] = temp;
        }
    }
}