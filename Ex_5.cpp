#include <stdio.h>
#include <stdlib.h>

int main(){
    int h;
    printf("Digite o valor limite para a cadeia de Fibonacci: ");
    scanf("%d", &h);

    int a = 0, b = 1, prox; // significa próximo

    printf("Cadeia de Fibonacci até %d:\n", h);

    // Imprime o primeiro termo
    if (h >= 0)
        printf("%d", a);
    
    // Imprime o segundo termo, se necessário
    if (h >= 1)
        printf(", %d", b);
        
    // Gera os próximos termos da cadeia
    prox = a + b;
    while (prox <= h) {
        printf(", %d", prox);
        a = b;
        b = prox;
        prox = a + b;
    }
    getchar();
    printf("\n");
    return 0;
}
