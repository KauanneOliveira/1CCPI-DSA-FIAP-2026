#include<stdio.h>
#include<string.h>

int main() {
    char lista[3][50];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Nome %d: ", i+1);
        fgets(lista[i], 50, stdin);
        lista[i][strcspn(lista[i], "\n")] = 0;
    }

    // exibição em ordem inversa
    printf("\n--- LISTA INVERSA ---");
    for (i = 2; i >= 0; i--) {
        printf("\n%s", lista[i]);
    }
    
    return 0;
}
